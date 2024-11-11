#include<stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("enter the no. of element :-\n");
    scanf("%d",&n);
    printf("enter element :-\n");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    //printf("enter serching element");
    //scanf("%d",&num);
    i=0;
    while (i<n-1)
    {
        j=0;
        while (j<n-1-i)
        {
            
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            j++;
        }
        i++;
    }
    //int swap = 0;
    /*for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1;i++)
        {

            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                //swap =1;

            }   
        }
    }*/
    printf("Sorted Array\n"); 
    for (i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;

    

}