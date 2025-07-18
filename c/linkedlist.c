#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
//traversal
void traversel(struct node*ptr){
    while(ptr!=0){
        printf(" %d\n",ptr->data);
        ptr = ptr->next;
    }
}
// insertion at beginning

struct node * insertAtfirst (struct node * head, int data ){
    struct node * ptr = (struct node *)malloc (sizeof (struct node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}
int main (){
    struct node * head = (struct node *)malloc (sizeof (struct node));
        struct node *second = (struct node *)malloc (sizeof (struct node));
    struct node * third = (struct node *)malloc (sizeof (struct node));
    struct node * forth= (struct node *)malloc (sizeof (struct node));
     head -> data = 7;
     head -> next = second ;
     second -> data = 5;
     second -> next = third;
     third -> data = 8;
     third -> next = forth;
     forth -> data = 10;
     forth -> next = NULL; 
     printf ("Elements are ");
     traversel(head);
     head = insertAtfirst(head,9);
     printf("After insertion elements are :\n");
     traversel(head);
     return 0 ;
}