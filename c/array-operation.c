#include<stdio.h>
 // Array traversal

/*int main (){
    int arr[5];
int i;
for (i=0;i<5;i++){
    printf("enter the elements at index %d : ",i);
    scanf ("%d",&arr[i]);
}
for (i=0;i<5;i++){
    printf("elements are %d\n",arr[i]);
    
}
return 0;
}*/

//Array traversal using funtion

void display (int arr[], int n){
 for ( int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}   
}
// insertion in array
int insertion(int arr[],int size,int element, int capacity, int index){
    if (size>=capacity){
        return -1;
    }
   for ( int i=size-1;i>=index;i--){ 
    arr[i+1]=arr[i];
   }
   arr[index]=element;
   return 1;
}
void deletion (int arr[], int size, int index){
     for ( int i=index;i<=size-1;i++){ 
    arr[i]=arr[i+1];
   }
}

// linear search

int linearSearch (int arr[],int size, int element){
    for (int i = 0; i <= size; i++){
        if(arr[i] == element){
        return 1;
        }  
    }
    return -1;
    }
   

int main (){
    int arr[16]={34,56,78,98,87,65,43,69,12,8,54};
    int size=11, element =88, index = 3;
    printf("elements are\n");
    display(arr,11);
    insertion(arr, size, element, 100, index);
    size+=1;
    printf("\n");
    printf("after insertion elements are\n");
    display(arr,size);
    /*index=1;
    deletion(arr,size,index);
    size-=1;
    printf("After deletion Element are\n");
    display(arr,size);*/

    // size = sizeof(arr)/sizeof(int);
     element = 12;
      size =12;
    int searchindex = linearSearch(arr, size, element);
    printf("the element %d is found at index %d\n",element,searchindex);
    return 0;
}