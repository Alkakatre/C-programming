#include<stdio.h>
void main()
{
    int i=2,p,n,k=0;
    printf("enter the number=");
    scanf("%d",&n);
    for(i=2;i<=(n-1);i++)
    {
     if(n%i==0)
     { 
         k=1;
         break;
     }
    }
    if(k=0)
    {printf("number is prime");
    }
    else
    {printf("number is not prime");}   
}
