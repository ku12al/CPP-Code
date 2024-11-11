 #include<stdio.h>
 void main()
 {
    int arr[10],n,num,i;
    printf("enter the no. of element :-");
    scanf("%d",&n);
    printf("enter element :-");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter no. of search :-");
    scanf("%d",&num);
    for (i=0;i<n;i++)
    {
        if(num==arr[i]){
        printf("yes");
        break;
        }
    }
    if(n==i)
    printf("no");

 }