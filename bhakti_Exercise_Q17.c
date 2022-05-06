// Exercise

//Q17)
#include <stdio.h>
#define MAX 3 // declare Max=3 in macros

int main() {
    
    printf("value of MAX is %d\n",MAX);
    #undef MAX
    #ifdef MAX
         printf("Have a good day");
    #endif     
}

/*Output:-
value of MAX is 3 */
