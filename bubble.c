#include<stdio.h>
void main()
{
 int n, i,j,arr[6],temp;
 printf("enter the elementsin array");
 scanf("%d",&n);
 printf("enter the elements in arrar/n");
 for(i=0;i<n-1;i++)
 {
   scanf("%d",arr[i]);
   for(i=0;i<n-1;i++)
{
  for(j=0;j<n-i-1;j++)
    
{  if(arr[j]>arr[j+1])


{
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;

}
}

}
  printf("after bubble sort");
  for(i=0;i<n;i++)
  { printf("%d",arr[i]);
  }

 }
 }











