//9. Write a program in C to read n number of values in an array and display it in reverse
//order. Take array values from the user.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    int var[n],i;
    printf("enter the elements into an array\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&var[i]);
     }
     printf("array elements in reverse order\n");
    for(i=n-1;i>=0;--i)
    {
        printf("%d ",var[i]);
    }
    
    return 0;
}