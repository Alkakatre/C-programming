#include<stdio.h>
void main()
{ 
    int age;
    printf("Enter the age");
    scanf("%d",&age);
    if(age<18)
    printf("person is not allowed for work");
    else
    { 
      if((age>=18)&&(age<=60))  
       printf("person is allowed to work");
       else
       printf("person may receive pension and not allowed for work");

    }

}