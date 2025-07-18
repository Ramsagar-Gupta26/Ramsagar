#include<stdio.h>


int main(){
     int i;
     int arr[5]={3,43,55,21,43,};
    int *ptr=&arr;
    //for( i=0;i<5;i++){
    //printf("%d index is",i);
   // scanf("%d",&arr[i]);
    //} 
       for( i=0;i<5;i++){

    printf("%dindex =%d\n",i,*(ptr+i));
       }
    return 0;
}