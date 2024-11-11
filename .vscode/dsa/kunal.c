#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        printf("*\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
            printf("%d",i);
        } 
          
    }
}