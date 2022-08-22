//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
//array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,avg;
    printf("enter the values to store in an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("sum of number stored in an array %d",sum);
     
     return 0;
}     