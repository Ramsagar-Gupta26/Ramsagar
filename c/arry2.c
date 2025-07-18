#include<stdio.h>

int countodd(int arr[], int n);
int main(){
    int total;
   int arr[]= {45,64,761,43,12,23,11,24,15};
   total=countodd(arr,9);
    printf(" total odd number are %d\n", total);
    printf("and even numbers are %d\n ",(9-total));
    return 0;
}
int countodd(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i] %2 !=0){
        count++;
        }
    }
    return count;
}
