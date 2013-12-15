#include "defs.h"
int main(int argc, const char * argv[])
{
    double square(double x);
    printf("%d\n",(int)square(1.9));//(9.1)
    printf("%g\n",square(1.9));//(9.2)
}
double square(double x)
{
    return x*x;
}
