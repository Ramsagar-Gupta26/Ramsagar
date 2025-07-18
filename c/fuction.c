#include<stdio.h>

void namestay();
void bonjour();

int main()
{
    printf("enter i for indian and f for french");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        namestay();
    }
        else{
    bonjour();
        }
    return 0;
}
void namestay(){
    printf("hello\n");
}
void bonjour(){
    printf("bonjour\n");
}