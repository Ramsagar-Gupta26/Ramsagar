#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
};

struct node * top = NULL ;

//creating a linked list

void linkedlisttraversal (struct node * ptr){
    while (ptr != NULL){
        printf("element :%d\n" , ptr-> data);
        ptr = ptr -> next;
    }
}

int isEmpty (struct node * top) {
    if (top == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

  int isFull (struct node * top) {
 struct node * p=(struct node *) malloc (sizeof (struct node));

   if (p == NULL) { 
        return 1;
     } 
     else {
        return 0;
     } 
     }


//push operation
struct node * push (struct node * top, int x){
     if (isFull(top)){
         printf("stack is voerflow\n");
     }
     else {
     struct node * n=(struct node *) malloc (sizeof (struct node));
    n->data  = x;
    n -> next = top;
     top = n;
    return top;
}
}
//pop operation

 int pop(struct node * toop){
     if (isEmpty(toop)){
         printf("stack is underflow\n");
     }
     else {
     struct node * n=toop;
       top = toop -> next;
     int x = n-> data;
     free(n); 
    return x;
}
}
//peak operation

int peak (int position){
struct node * ptr = top;

for (int i= 0;( i<position - 1 && ptr != NULL ); i++)
{
    ptr = ptr-> next ;
}
if (ptr != NULL){
    return ptr->data;
}
else {
    return -1;
}
}
int main(){
//struct node * top = NULL ;
top = push ( top, 56);
top = push ( top, 65);
top = push ( top, 45);
top = push ( top, 44);

linkedlisttraversal (top);

int element = pop (top);
printf("poped element is %d\n",element);
linkedlisttraversal (top);

for (int i=1;i<=4;i++){
    printf ("Value at position %d is : %d\n",i,peak (i));
}
    return 0;
}