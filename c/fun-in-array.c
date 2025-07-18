#include<stdio.h>

void fun (int val[]);
int main (){
int i, arr [6] = {1,2,3,4,5,6};
fun (arr);
printf(" now the array are :");

for ( i= 0; i<6; i++){
printf(" %d\n:",arr[i]);

}
return 0;
}
void fun (int val []) {
int sum = 0, i;
for ( i= 0; i<6; i++){
    val[i] = val[i]*val [i];
    sum += val[i];
}
printf("the sum of square = %d\n",sum);
}