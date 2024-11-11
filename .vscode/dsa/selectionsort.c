#include<stdio.h>
void main()
{
    int a[10],i,j,n,min;
    printf("enter the element");
    scanf("%d",&n);
    printf("enter element");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for ( i = 0; i < n; i++)
    {
         min = i;
        for (j=i+1;j<n +1;j++)
        {
            if (a[j]<a[min])
            {
                min =j;
            }

        }
        if (min!=i)
        {
          //int swap (a[i],a[min]);
            
        }
    }
    printf("sorted element");
    for(i=0;i<n;i++)
    printf("%d",a[min]);
    
}