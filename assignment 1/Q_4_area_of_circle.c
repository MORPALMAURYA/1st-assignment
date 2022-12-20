// Q.4 write a program the area of the circle.

#include<stdio.h>
int main()
{
    float area,radius;

    printf("enter a radius \n");
    scanf("%f",&radius);

    area=3.14*radius*radius;

    printf("area of circle of %f and radius is %f",area,radius);

    return 0;
}