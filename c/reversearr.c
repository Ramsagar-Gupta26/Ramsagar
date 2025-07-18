#include<stdio.h>

 void revarray (int arr[], int n);
 void printarray (int arr[], int n);
 int main(){
 int arr[]={54,34,21,35,67};
 revarray (arr, 5);
 printarray (arr, 5);
    return 0;
}
 void printarray (int arr[], int n){
    for (int i=0;i<n;i++){
        printf("%d\t" ,arr[i]);
    }
    //printf("\n");
 }


 void revarray (int arr[], int n){
 for(int i=0;i<n/2;i++){
 int firstval = arr[i];
 int secondval = arr[n-i-1];

arr[i]=secondval;
arr[n-i-1]=firstval;}
}
