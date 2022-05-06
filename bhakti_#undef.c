/* Q5) Program to understand the use of #undef */ 
#include<stdio.h>
#define FLAG   // define flag here
main()
{
    int a=20,b=4;
    #ifdef FLAG
        printf("FLAG is defined\n"); // these statement is executed 
        a++;
        b++;
    #endif 
    #undef FLAG
    #ifdef FLAG
        printf("Preprocessor");
        a++;
        b++;
    #endif
    printf("a = %d, b= %d\n",a,b);
    printf("program completed\n");
}

/* Output
FLAG is defined
a = 21, b= 5
program completed
