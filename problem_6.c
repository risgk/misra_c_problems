#include "defs.h"
int main(int argc, const char * argv[])
{
    int x = 1, y=0;
//Using result of an assignment as a condition without parentheses.
    if (x = y) PRINT2(d,x,y);//(6.1)
    else PRINT2(d,y,x);//(6.2)
    return 0;
}
