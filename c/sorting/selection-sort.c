#include<stdio.h>
int main(){
    int a[10],i,j,min,loc,temp,n;
    printf("enter the number of elements");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("elements are %d ",i+1);
        scanf("%d ",&a[i]);

    }
    for(i=0;i<n-1;i++){
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++){
if(a[j]<min){
    min=a[j];
    loc=j;
}
if(loc!=i){
    temp=a[i];
    a[i]=a[loc];
    a[loc]=temp;
}
        }
    }
    printf("elements after sorting are\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}