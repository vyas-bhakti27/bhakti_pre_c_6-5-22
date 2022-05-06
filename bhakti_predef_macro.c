/* Q7) Program to understand the pre-defined macros.*/
#include<stdio.h>
main()
{
    printf("%s\n",__DATE__); // predefine date macro
    printf("%s\n",__TIME__); // predefine time macro
    printf("%s\n",__FILE__); // predefine file macro
    printf("%s\n",__LINE__); // predefine line macro
}
