#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while (ptr!=NULL){
        printf("element : %d\n",ptr-> data);
        ptr= ptr->next;
    }
}
struct node * first(struct node *head, int data){
    struct node * ptr= (struct node *) malloc(sizeof(struct node));
    ptr -> next = head;
    ptr -> data =data;
    return ptr;
}
 struct node * insertbet(struct node * head , int data, int index){
    struct node * ptr= (struct node *) malloc(sizeof(struct node));
struct node * p = head;
int i = 0;
while (i!= index-1){
    p = p-> next;
    i++;
}
ptr-> data = data;
ptr -> next =  p-> next;
p->next = ptr;
return head;
 }
int main (){
    struct node * head = (struct node *) malloc(sizeof(struct node));

    struct node * second= (struct node *) malloc(sizeof(struct node));
    struct node * third= (struct node *) malloc(sizeof(struct node));
    head-> data = 7;
    head -> next =second;
    second-> data =10;
    second->next = third;
    third -> data = 14;
    third->next = NULL;
    head = first (head , 17);
        traversal(head);
head =insertbet(head ,67,2);
traversal(head);
    return 0;
}