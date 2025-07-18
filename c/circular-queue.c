#include<stdio.h>
#include<stdlib.h>

struct circular_queue
{
    int size;
    int f;
    int r;
    int * arr;
};

int isEmpty(struct circular_queue * q){
    if (q->r == q->f){
        return 1;
    }
    else {
    return 0;
    }
}
//to check the queue is full or empty
int isFull(struct circular_queue * q){
    if ((q->r+1)%q->size == q->f){
        return 1;
    }
    else{
    return 0;
    }
}

//enqueue operation
void enqueue( struct circular_queue * q, int val){
    if (isFull(q)){
        printf(" the queue is full\n");
    }
    else {
        printf("enqued element is %d\n",val);
        q->r = (q->r+1)%q->size;
        q->arr[q -> r] = val;
    }
}

//dequeue operation
int dequeue( struct circular_queue * q){
   int  a = -1;
    if (isEmpty(q)){
        printf(" the queue is Empty\n");
    }
    else {
        q->f = (q->f+1)%q->size ;
        a = q->arr[q -> f];
    }
    return a ;
}


int main (){
    int val;
    struct circular_queue q;
     q.size = 5;
     q.f = q.r = 0;
    q.arr = (int*)malloc(q.size * sizeof(int));
 
    enqueue(&q , 12);
    enqueue(&q , 15);
    enqueue(&q , 18);
    enqueue(&q , 34);

      //  if (isFull(&q)){
    //printf("the queue is full\n");
    //}// 
   
printf("dequeueing element is %d\n", dequeue(&q));
printf("dequeueing element is %d\n", dequeue(&q));
printf("dequeueing element is %d\n", dequeue(&q));
printf("dequeueing element is %d\n", dequeue(&q));
        enqueue(&q ,64);

//    if (isEmpty(&q)){
//     printf("the queue is empty\n");
//    }

//     if (isFull(&q)){
//       printf("the queue is full\n");
//     }
//         enqueue(&q , 44);
//     enqueue(&q , 54);


    return 0;
}