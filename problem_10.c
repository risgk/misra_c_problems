#include <stdio.h>
#define absm(x) x>=0?x:-x
int main(int argc, const char * argv[])
{
    int a=1, b=2;
    printf("%d\n",absm(a-b));//(10.1) 
    return 0;
}
