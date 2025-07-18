//parenthesis matching using stack


#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
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
void push (struct stack *ptr, char val){
    
    if (isFull(ptr)){
        printf("stack is full and cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr-> arr[ptr -> top] = val;
    }
}
//poped
   char pop (struct stack *ptr){
    
    if (isEmpty(ptr)){
        printf("stack is underflow and cannot pop %d to the stack\n");
        return -1;
    }
    else{
        char val=ptr->arr[ptr->top];

        ptr -> top--;
        return val;
    }
}
char stacktop(struct stack * sp){
    return sp -> arr[sp -> top];
}
//for matching different parenthesis

int match (char a, char b){

    if (a == '{' && b == '}'){
        return 1;
    }
    if (a == '(' && b == ')'){
        return 1;
    } 
     if (a == '[' && b == ']'){
        return 1;
    }
    return 0 ;
}


int parenthesisMatch ( char* exp){
    struct stack * sp;
    sp -> size = 20;
    sp -> top = -1;

    sp -> arr = (char *)malloc(sp->size * sizeof (char));
char poped_ch;
    for (int i = 0 ; exp[i]!='\0'; i++){
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push (sp, exp[i]);
        }
        else if (exp [i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if (isEmpty(sp)){
                return 0 ;
            }
           poped_ch =  pop (sp);
           if (!match (poped_ch, exp[i])){
            return 0;
           }
        }
    }
    if (isEmpty(sp)){
        return 1;
    }
    else {
        return 0;
    }
}

int main(){
char * exp = "{(8*9+)]}";
if (parenthesisMatch(exp)){
    printf("The parenthesis is balenced ");
}
else {
    printf("The parenthesis is not balenced");
}
    return 0;
}
