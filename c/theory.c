//displaying an array

#include<stdio.h>

int main(){
int a[5],i;
for(i=0; i<5; i++){
    printf("enter the value for a[%d] :",i);
    scanf("%d",&a[i]);
}
printf("the array element are:\n");
for (i=0; i<5; i++)
printf ("%d\t",a[i]);
printf("\n");

//to find largest number

int arr[10] //= {23,1,2,45,22,14,67,78,32,68,};
for(i=0; i<10; i++){
    printf("enter the value for arr[%d] :",i);
    scanf("%d",&arr[i]);
}
int small, large;
small= large = arr[0];
for (i=1; i<10; i++){
    if (arr[i]< small)
    small=arr[i];

    if (arr[i]>large)
    large=arr[i];
}
printf("smallest = %d\n largest = %d\n", small,large);
    return 0;
}
