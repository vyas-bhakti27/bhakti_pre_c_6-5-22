// Exercise
//Q10)

#include <stdio.h>
#define CUBE(x)  ((x)*(x)*(x))
main() {
    int i=1;
    while(i<=8)
         printf("%d\t",CUBE(i++));
     
}
/*Output:-
6	120	504	
