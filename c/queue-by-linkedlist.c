#include<stdio.h>
#include<stdlib.h>

struct node * f = NULL;
struct node * r = NULL;

struct node {
    int data;
    struct node * next ;
};
void linkedlisttraversal (struct node * ptr){
  printf("printing the element of the linkedlist \n");
    while (ptr != NULL){
        printf(" Enqueue element is :%d\n" , ptr-> data);
        ptr = ptr -> next;
    }
}
void enqueue (int val) {

    struct node * n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL){
        printf("queue is full\n");
    }
    else {
        n -> data = val;
        n -> next = NULL;
        if (f == NULL){
            f=r=n;
        }
        else {
            r -> next = n;
            r = n;
        }
    }
}
int dequeue (){
    int val= -1;
    struct node * ptr = f;
    if (f == NULL){
        printf ("queue is Empty\n");
    }
    else {
        f = f-> next;
        val = ptr -> data;
        free (ptr);
    }
    return val;
}

int main (){
    enqueue( 34);
    enqueue(56);
    enqueue(36);
    enqueue(16);
    enqueue(6);
    enqueue(96);

     linkedlisttraversal(f);
printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());
// printf("dequeing element is %d\n",dequeue());


    return 0;
}