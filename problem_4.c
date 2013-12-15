#include "defs.h"

int i=0;
int main(int argc, const char * argv[])
{
    auto int i=1;
    PRINT1(d,i);//(4.1)
    {
        int i=2;
        PRINT1(d,i);//(4.2)
        {
            i+=1;
            PRINT1(d,i);//(4.3)
        }
        PRINT1(d,i);//(4.4)
    }
    PRINT1(d,i);//(4.5)
    return 0;
}
