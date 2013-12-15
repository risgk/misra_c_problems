#include "defs.h"
int main(int argc, const char * argv[])
{
    int x = 0, y=1;
//Using result of an assignment as a condition without parentheses.
    if (x = y) PRINT2(d,x,y);//(6.3)
    else PRINT2(d,y,x);//(6.4)
    return 0;
}
