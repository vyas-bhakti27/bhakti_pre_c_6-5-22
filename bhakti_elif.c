#include<stdio.h>
#define FLAG 2
main()
{
    int a=20,b=4;
    #if FLAG>=3
        printf("value of flag is greater than or equal to 3\n");
        a=a+b;
        b=a*b;
    #else        
        printf("value of flag is less than 3\n");
        a=a-b;
        b=a/b;
    #endif
    printf("a = %d, b = %d\n",a,b);
    printf("program completed \n");
        
}
