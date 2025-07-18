#include<stdio.h>
//int main(){
   /*/ int age =21;
    int *ptr=&age;
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    printf("%u\n",*(&age));
        printf("%p\n",&age);
    printf("%u\n",ptr);
    printf("%p\n",&age);*/
    /*int x;
    int *ptr;


    ptr=&x;
    *ptr=0;

     printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

    *ptr+=5;
    printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);

   // (*ptr)++;
    //printf("x=%d\n",x);
    //printf("*ptr=%d\n",*ptr);

    ++(*ptr);
     printf("x=%d\n",x);
    printf("*ptr=%d\n",*ptr);*/
   /*int i=5;
    int*ptr=&i;
    int**pptr=&ptr;
    printf("%d\n",**pptr);
    printf("%d\n",*pptr);
        printf("%d\n",&i);
        printf("%d\n",ptr);*/


//call by value
void swap(int *a,int *b);
int main(){
int x=3,y=5;
swap(&x,&y);
 printf("x=%d and y=%d",x,y); 
 return 0;

}
 void swap(int *a,int *b){
 int t=*a;
 *a=*b;
 *b=t;
 printf("*a=%d and *b=%d\n",*a,*b);
 
    }
