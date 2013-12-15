#include "defs.h"
int main(int argc, const char * argv[])
{
    // insert code here...
printf("%d\n",square(1.9));//implicit declaration of function 'square' is invalid in C99(9.1)
printf("%g\n",square(1.9));//Format specified type 'double but the argument has type 'int'(9.2)
}
int square(double x)
{   return (int) x*x;}
