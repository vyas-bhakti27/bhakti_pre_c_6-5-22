// Exercise
//Q14)

#include <stdio.h>
#define y 10 // in macro define value of y as 10
main() {
    #if x || y && z  
        printf("Sea in Depth\n");
    #else
        printf("See in Depth\n");
    
    #endif
}

/* Output:-
See in Depth */
