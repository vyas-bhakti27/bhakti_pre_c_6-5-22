// Exercise
//Q16)
#include <stdio.h>
#define DIFF(FNAME, DTYPE, RTYPE) // define DIFF 
RTYPE FNAME(DTYPE X,DTYPE Y) { return x-y;}
DIFF(diff_int,int,int);
DIFF(diff_iptr,int*,int);
DIFF(diff_float,float,float);
DIFF(diff_fptr,float*,int);
main() 
{
    int iarr[5]={1,2,3,4,5},a,p,q;   // declaring integer array
    float farr[7]={1.2,2.3,3.4,4.5,5.6,6.7,7.8},b;  //  declaring float array 
    a=diff_int(iarr[4],iarr[1]);
    b=diff_float(farr[6],farr[2]);
    p=diff_iptr(&iarr[4],&iarr[1]);
    q=diff_fptr(&iarr[4],&farr[1]);
    printf("a = %d, b = %.1f, p = %d, q = %d\n",a,b,p,q);
}
   
/* Output:-
a=3, b=4.4, p=3, q=3
