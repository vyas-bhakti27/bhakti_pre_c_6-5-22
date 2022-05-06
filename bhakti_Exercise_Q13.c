// Exercise
//Q13)

#include <stdio.h>
#define INT int 
main()
{
    INT a=2, *p=&a; // a pointer to address of first location
    printf("%d %d\n",a,*p);
}

/* Output:-
2 2
