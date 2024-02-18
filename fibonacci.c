#include<stdio.h>
void main()
{
    int i,n,first=0,second=1,third;
    printf("value of number in series");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
     printf("%d",first);
     third=first+second;
     first=second;
     second=third;
         printf(" ");

    }

     


}