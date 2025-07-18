#include <stdio.h>
int addNumbers(int a, int b);         // function prototype
int addNumbers(int a, int b)         // function definition   
{
    int sum;
    sum = a+b;
    return sum;                  // return statement
}
int main()
{
    int n1,n2,sum;

    printf("Enters two numbers: ");
    scanf("%d %d",&n1,&n2);

    sum = addNumbers(n1,n2);        // function call
    printf("sum = %d",sum);

    return 0;
}

