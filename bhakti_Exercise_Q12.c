// Exercise
//Q12)

#include <stdio.h>
#define INC(dtype,x,i)  x=x+i 
main()
{
    int arr[5]= {20,34,56,12,96}, *ptr=arr; // declaring array & *ptr pointer to array
    INC(int,arr[2],3);
    INC(int*,ptr,2);
    printf("*ptr = %d\n",*ptr);
}

/* Output:-
*ptr = 59
