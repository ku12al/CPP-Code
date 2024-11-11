#include<stdio.h>
void main()
{
    int a[10],b[10],c[20],n1,n2,n3,num,temp,i,j,k;
    n3 = n1+n2; 
    
    printf("enter  no. element n1:-\n");
    scanf("%d",&n1);
    printf("enter element n1:-\n");
    for (i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("enter no. element n2 :-\n");
    scanf("%d",&n2);
    printf("enter element n1:-\n");
    for (j=0;j<n2;j++)
    scanf("%d",&b[j]);
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2)
    {
        if (a[i]<b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
        while(i<n1)
        {
        c[k++] = a[i++];
        }
        while(j<n2)
        {
            c[k++] = b[j++];
        }
    }
    
    for (i=0;i<n3;i++)
    printf("%d",c[i]);
}