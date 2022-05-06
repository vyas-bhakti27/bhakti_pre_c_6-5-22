// Online C compiler to run C program online
//Q6)

#include <stdio.h>
#define INFINITE  while(1)
#define CHECK(a)  if(a==0)  break
main() {
    int x=5;
    INFINITE
    {
    
    printf("%d",x--); // decrementing value of x
    CHECK(x);
    }
    
}

/* Output:-
54321 */
