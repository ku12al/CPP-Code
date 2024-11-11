#include<stdio.h>
void main()
{
    int a[20],size,pos,i,n;
    printf("enter the number of an array :-");
    scanf("%d",&n);
    printf("enter element in array:-");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("for what position you wnat to delete :-");
    scanf("%d",&pos);
    if(pos<=0 || pos>n)
    {
        printf("invalid pos");
    }
    else{
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
            
        }
        size--;
    }
    for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);
}