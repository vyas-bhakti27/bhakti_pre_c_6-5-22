// Exercise
//Q19)
  
#include <stdio.h>
#define show(value) printf( #value " = %d\n", value);
main() 
{
    int a=10,b=5,c=4;
    show(a/b*c); // passing expression in place of value
    
    
}
/* Output:-
a/b*c = 8
