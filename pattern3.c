#include<stdio.h>
void main()
{
 int row,i,j,space,n=1;
 printf("enter the no of row");
 scanf("%d",&row);
 for(i=1;i<=row;i++)
{
 for(j=1;j<=row-i;j++)
 {
     printf(" \t");
 }
 for(j=0;j<2*i-1;j++)
{
    printf("%d\t",2*i-1+j);
}
printf("\n\n");




}











}