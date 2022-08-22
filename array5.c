//5. Write a program to find the smallest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
 int main()
 {
    int a[10],i,min=a[0];
    printf("Enter a ten values to store in an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<10;i++)
       {
         if(min>a[i])
           min=a[i+1];
       }
        printf("the smallest number stored in an array is %d",a[i]);
 
    
    return 0;
 }