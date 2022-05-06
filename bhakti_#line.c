/* Q8) Program to understand the  use of #line*/
#include<stdio.h>
main()
{
    printf("c in depth\n"); 
    printf("%d %s\n",__LINE__,__FILE__); // 
    #line 25 "myprog.c" // Assign them line no. & file name in macros
    printf("%d %s\n",__LINE__,__FILE__); // print the line & file name in output
}
