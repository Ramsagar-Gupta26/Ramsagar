#include<stdio.h>

void printnumbers ( int *arr,int n);
int main(){
int arr[]={67,76,45,32,76,98,32};
printnumbers(arr,7);
return 0;
}
void printnumbers ( int *arr,int n){

for(int i=0;i<n;i++)
printf("number at index %d is %d\n",i,arr[i]);
//printf("\n");
}
