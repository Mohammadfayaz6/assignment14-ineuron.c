//3. Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,res=0;
    printf("Enter 10 values to store in an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        sum=sum+a[i];
       
    }
     printf("sum of even numbers are %d\n",sum);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
        res=res+a[i];
    }
    printf("sum of odd number are %d",res);
    
    
    return 0;
}