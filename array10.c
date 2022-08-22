//10. Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("enter 10 elements into an array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements stored in array is\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nthe elements copy from one array into the another array\n");
    for(i=0;i<10;i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    return 0;
}