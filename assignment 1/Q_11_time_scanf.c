/* Q.11 WAP to take time as an input in below format and convert the time format
and display the sesult as given below */

#include<stdio.h>
int main()
{
    int hour, minuts;
     
    printf("enter HH:MM formate \n ");
    scanf("%d:%d",&hour,&minuts);
     
     printf("hour=%d minuts=%d",hour,minuts);
     return 0;
}