#include<stdio.h>
#include<stdlib.h>

struct myarray {
    int totalsize ;
    int usedsize;
    int * ptr;

};

void creatarray(struct myarray *a, int tsize, int usize){
a->totalsize=tsize;
a->usedsize=usize;
a->ptr=(int*)malloc(tsize*sizeof(int));
}
void setval(struct myarray *a){
    int n;
    for (int i=0; i< a -> usedsize;i++)
    {
    printf("enter the element %d :",i);
    scanf("%d",&n);
    (a->ptr)[i]=n;
}
}
void show(struct myarray *a){
    
    for (int i=0; i<a -> usedsize;i++){
        printf("%d\n",(a->ptr)[i]);
    }
    }
    int main (){
        struct myarray marks;
        creatarray(&marks,10,2);
        setval(&marks);
        printf("now showing the values are \n");
        show(&marks);
        return 0;
    }