#include<stdio.h>
#include<math.h>

float squarearea( float side);
float area( float side);
float rectanglearea( float side);

int main(){
    float side;
    printf("enter the side");
    scanf("%f",&side);
    printf(" area of square is %f",(squarearea(side)));
    return 0;
}

float squarearea(float side){
    return side*side;
}