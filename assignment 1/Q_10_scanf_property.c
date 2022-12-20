/* Q.10 WAP to table date as an input in below  gievn format and convert the 
date formate and display the result as given below 
*/

#include<stdio.h>
int main()
{
    int date,month,year;

    printf("enter date month year \n");
    scanf("%d-%d-%d",&date,&month,&year);

    printf("date=%d month=%d year=%d",date,month,year);
    return 0;

}