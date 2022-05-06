/* Q3) program to understand the use of #ifdef directives */

#include<stdio.h>
#define FLAG  // the macro FLAG has been defined here
main()
{
    int a=20,b=4;
    #ifdef FLAG //  statement are executed b/w #ifdef and #endif
        printf("FLAG is defined\n");
        a++;
        b++;
    #endif
    printf("a = %d, b = %d\n",a,b);
    printf("program completed\n");
    
}


/*Output:-
FLAG is defined
a = 21, b = 5
program completed */
