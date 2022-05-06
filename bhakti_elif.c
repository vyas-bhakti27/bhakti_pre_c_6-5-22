/* Q1) Program to understand the use of #else directives */

#include<stdio.h>
#define FLAG 2
main()
{
    int a=20,b=4;
    #if FLAG>=3         // if value of flag is greater than or equal to 3 it will print the #if statement otherwise print the #else statements
        printf("value of flag is greater than or equal to 3\n");
        a=a+b;
        b=a*b;
    #else        
        printf("value of flag is less than 3\n");
        a=a-b;
        b=a/b;
    #endif
    printf("a = %d, b = %d\n",a,b);
    printf("program completed \n");
        
}


/* Output:-
value of flag is less than 3
a = 16, b = 4
program completed */
