/* Q6) Program to understand the debugging process */
#include <stdio.h>
#define DEBUG    // defined DEBUG in macros

main()
{
    int x,y;
    #ifdef DEBUG
        printf("starting main()\n");
    #endif
    func(); // calling  a function
    
    #ifdef DEBUG 
        printf("Now value of x = %d and y = %d \n",x,y);
    #endif
    
}
func()  // finction is called
{
    #ifdef DEBUG
        printf("Inside funct()\n");
    #endif    
}


/* Output:-
starting main()
Inside funct()
Now value of x = 0 and y = 0 */

