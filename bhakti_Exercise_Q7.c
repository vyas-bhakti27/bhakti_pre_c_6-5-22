// Online C compiler to run C program online
//Q7)

#include <stdio.h>
#define ABS(x)  ((x)<0 ?-(x):(x))
main() {
    int array[4] = {1,-2,3,-4}; // declare a array of 4 elements
    int *p= array+3;         // *p= a pointer to array
    while(p>=array)
    {
        printf("%d ",ABS(*p));
        p--;      // decrementing p
    }
}

/* Output:-
4 3 2 1 
