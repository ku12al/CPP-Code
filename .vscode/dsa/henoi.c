#include<stdio.h>
void main()
{
    int n,start = 1,temp = 2,stop =3;
    printf("enter no. of disk :-");
    scanf("%d", &n);
    towerofhenoi(n,start,stop,temp);
    
    
}
void towerofhenoi(int n,int start,int stop ,int temp)
{
    if (n>0){
    towerofhenoi(n-1,start,temp,stop);
    printf("%d%d%d \n",n,start,stop);
    towerofhenoi(n-1,temp,stop,start);}
}