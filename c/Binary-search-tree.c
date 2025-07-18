#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * left;
       struct node * right;
};
struct node * createnode (int data){
    struct node * n  = (struct node *)malloc (sizeof (struct node));
    //n = (struct node *)malloc (sizeof (struct node));
    n->data = data;
    n -> left =NULL;
    n -> right = NULL;
    return n;
}

void postorder (struct node * root){
    if (root!=NULL){
       
        postorder(root ->left);
        postorder(root -> right);

         printf("%d " , root -> data);
    }
}
void inorder (struct node * root){
    if (root!=NULL){
        inorder(root ->left);
         printf("%d " , root -> data);
        inorder(root -> right);
    }
}

struct node * search (struct node * root,int key){
    while (root!=NULL){
    
    if (key == root -> data){
        return root;
    }
    else if (key < root -> data){
          root = root -> left;
    }
    else {
        root = root -> right;   
         }
    }
    return NULL;
}
//insertion operation

void insert(struct node * root,int key){
struct node * prev= NULL;
while (root!=NULL){
    prev = root;
    if (key == root ->data){
        printf("cannot insert %d already exist in BST",key);
        return;
    }
    else if (key < root -> data){
        root = root -> left;
    }
    else {
root = root -> right;
    }
 }
struct node * new = createnode(key);
if (key <prev -> data){
    prev -> left = new;
}
else {
       prev -> right = new;
 
}
}
//deletion operation

struct node * inorderprodecessor (struct node * root){
root = root -> left;
while (root->right!=NULL ){
    root = root -> right;}
    return root;
}
struct node * deletenode (struct node * root,int value){
    struct node * ipre;
    if (root == NULL){
        return NULL;
    }
   if (root->left == NULL&&root -> right == NULL){ 
free (root);
return NULL;
   } 
if (value < root -> data){
    root -> left = deletenode(root -> left, value);
}
else if (value > root -> data){
    root -> right = deletenode(root -> right, value);
}
else {
    ipre = inorderprodecessor(root);
    root -> data = ipre -> data;
 root -> left = deletenode(root -> left, ipre -> data);
}
return root;
}


int main (){
    struct node * p =createnode(5);
    struct node * p1 =createnode(3);
    struct node * p2=createnode(6);
    struct node * p3 =createnode(1);
    struct node * p4 =createnode(4);
    /* this is the tree

      5
     / \
    3   6
   / \
  1   4
  */

 p -> left = p1;
 p ->right = p2;
 p1 -> left = p3;
 p1 -> right = p4;
 // struct node * n = search (p,3);

// if (n!=NULL){
//     printf("found : %d",n->data);
// }
// else 
// printf("Element not found");


// insert (p,2);
//printf("inserted element is %d",p->left->left-> right->data);


inorder(p);
deletenode(p,6);
printf("\n");
printf("now the node is %d\n",p-> data);

inorder(p);
 return 0;
}