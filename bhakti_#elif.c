/*Q2) Program to understand the use of #elif directive */

#include<stdio.h>
#define FLAG 1 // define value of flag to 1
main()
{
    int a=20,b=4;
    #if FLAG==0
        printf("value of flag is zero\n");
        a++;
        b++;
    #elif FLAG==1       
        printf("value of flag  is 1\n");  // it will decrement the value of a-- & b-- because the value of flag=1
        a--;
        b--;
    #elif FLAG==2       
        printf("value of flag is 2\n");
        a=a-3;
        b=a-b;   
    #endif
    printf("a = %d, b = %d\n",a,b);
    printf("program completed \n");
        
}

/* Output:-
value of flag  is 1
a = 19, b = 3
program completed 

