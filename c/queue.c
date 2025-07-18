#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct queue * q){
    if (q->r == q->f){
        return 1;
    }
    else {
    return 0;
    }
}
//to check the queue is full or empty
int isFull(struct queue * q){
    if (q -> r == q -> size-1){
        return 1;
    }
    else{
    return 0;
    }
}

//enqueue operation
void enqueue( struct queue * q, int val){
    if (isFull(q)){
        printf(" the queue is full\n");
    }
    else {
        printf("enqued element is %d\n",val);
        q->r++;
        q->arr[q -> r] = val;
    }
}

//dequeue operation
int dequeue( struct queue * q){
   int  a = -1;
    if (isEmpty(q)){
        printf(" the queue is Empty\n");
    }
    else {
        q->f++;
        a = q->arr[q -> f];
    }
    return a ;
}


int main (){
    int val;
    struct queue q;
     q.size = 20;
     q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));
 
    enqueue(&q , 12);
     enqueue(&q , 15);

      //  if (isFull(&q)){
    //printf("the queue is full\n");
    //}// 
   
printf("dequeueing element is %d\n", dequeue(&q));
printf("dequeueing element is %d\n", dequeue(&q));

   if (isEmpty(&q)){
    printf("the queue is empty\n");
   }

    if (isFull(&q)){
      printf("the queue is full\n");
    }
    return 0;
}