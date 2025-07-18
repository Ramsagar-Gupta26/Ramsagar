#include<stdio.h>
int main (){
    int a[]={4,7,1,6,3,9,1,67,2};
    int i,j,temp;
    int n=sizeof (a)/sizeof (int);
    for (i=0;i<9;i++){
        //int x=0;
        for (j=0;j<9-i-1;j++){
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           // x++;
            }
        }
    }
     printf("elements are after sorting\n ");
    for (i=0;i<9;i++){
        
    printf(" %d ",a[i]);
    }
    
    return 0;
}