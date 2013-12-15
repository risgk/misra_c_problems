#include <stdio.h>
int main(int argc, const char * argv[])
{
int x;
x = -3 + 4 * 5 -6; printf("%d\n",x); //(1.1)
x = 3 + 4 % 5 - 6; printf("%d\n", x);//(1.2)
x = -3 * 4 % -6 / 5; printf("%d\n", x);//(1.3)
x = ( 7 + 6 ) % 5 / 2; printf("%d\n", x);//(1.4)
    return 0;
}
