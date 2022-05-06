// Exercise

//Q18)
#include <stdio.h>
#define PRINT1(message)  printf(message); // declare macro_name
#define PRINT2(message)  printf("message");
#define PRINT3(message)  printf(#message);

int main() {
    
    PRINT1("If we rest, we rust.\n");
    PRINT2("If we rest, we rust.\n");
    PRINT3("If we rest, we rust.\n");
}

/*Output:-
If we rest, we rust.
message"If we rest, we rust.\n"
