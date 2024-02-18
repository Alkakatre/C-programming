#include<stdio.h>
void main()
{
int i, space,row=5,j;
for(i=1;i<=row;i++)
{
for(space=i;space=row-i;space++)
{
    
    printf(" ");
 
 for(j=1;j<=i;j++)
    
   {
    printf("%d\t",j);
   }
   printf("\n");
}
}
}
    



