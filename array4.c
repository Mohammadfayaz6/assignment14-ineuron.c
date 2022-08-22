 //4. Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
 #include<stdio.h>
 int main()
 {
    int a[10],i,max=-1;
    printf("Enter a ten values to store in an aarry\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
       for(i=0;i<10;i++)
       {
          if(max<a[i])
          max=a[i+1];
       }
        printf("the greatest number stored in an array is %d",a[i]);
 
    
    return 0;
 }
