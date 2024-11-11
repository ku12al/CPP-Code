// Online C compiler to run C program online
#include<stdio.h>
void main()
{
    int a[20],n,num,LB,UB,mid,i;
    printf("Enter no. of element :-");
    scanf("%d",&n);
    printf("enter element :-\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    LB = 1;UB = n;
    printf("enter no. of search :-");
    scanf("%d",&num);
    mid =(LB+UB)/2;
    while(LB<=UB && a[mid]!= num)
    {
        if (num < a[mid])
          UB = mid -1;
          
          if(num > a[mid])
          LB = mid + 1;
          
        mid = (LB + UB)/2;
    }
     if (num == a[mid])
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
}