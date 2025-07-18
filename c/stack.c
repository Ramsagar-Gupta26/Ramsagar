//stack creation, implimention, push, pop and operation 


#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty (struct stack * ptr){
if (ptr -> top == -1){
    return 1;
}
else {
     return 0;
   }
}

int isFull (struct stack * ptr){
if (ptr -> top == ptr -> size - 1){
    return 1;
}
else {
     return 0;
   }
}
//pushing
void push (struct stack *ptr, int val){
    
    if (isFull(ptr)){
        printf("stack is full and cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr-> arr[ptr -> top] = val;
    }
}
//poped
   int pop (struct stack *ptr){
    
    if (isEmpty(ptr)){
        printf("stack is underflow and cannot pop %d to the stack\n");
        return -1;
    }
    else{
        int val=ptr->arr[ptr->top];

        ptr -> top--;
        return val;
    }
}

// to find position of  the elements inserting in stack

int peak (struct stack * s, int i){
    if (s-> top - i + 1 < 0){
    printf(" not a valid position");
    return -1;
}
else {
    return s-> arr[s->top - i + 1];//doubt
}
}

int stacktop (struct stack *s){
    return s -> arr[s -> top];
}

int stackbottom (struct stack *s){
    return s -> arr[0];
}
int main(){
struct stack *s =(int*) malloc(sizeof(int));
// struct stack *s =(struct stack *) malloc(sizeof(struct stack));

s->size = 10;
s->top = -1;
s->arr = (int*)  malloc(s->size * sizeof(int));
 
 //pushing an element
 /*s->arr=8;
 s->top++;
 
 // chekc the stack is empty

if(isEmpty(s)){
    printf("the stack is empty");
}
else{
    printf ("the stack is not empty");
}
*/
printf("stack has been created successfully\n");

printf("before pushing ,full: %d\n", isFull(s));
printf("before pushing ,empty: %d\n", isEmpty(s));
push (s,43);
push (s,56);
push (s,67);
push (s,36);
push (s,23);
push (s,78);
push (s,89);
push (s,19);
push (s,20);
push (s,21);
push (s,23);
push (s,26);

printf("after pushing ,full: %d\n", isFull(s));
printf("after  pushing , empty: %d\n", isEmpty(s));

printf("poped %d from the stack\n",pop(s));
printf("poped %d from the stack\n",pop(s));

for ( int j=1; j <= s->top+1; j++){
 printf("the value of position %d is %d\n", j, peak(s,j));
}

printf("the topmost element is %d\n", stacktop(s));
printf("the bottom most  element is %d\n", stackbottom(s));

    return 0;
}
