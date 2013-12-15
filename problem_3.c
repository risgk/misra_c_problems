#include "defs.h"
int main(int argc, const char * argv[])
{
    int x, y=1, z;

    if( y!=0) x=5;
    PRINT1(d,x);    //(3.1)
    
    if(y==0) x=3;
    else x=5;
    PRINT1(d,x);    //(3.2)
    
    x=1;
    if(y<0) if (y>0) x=3;
    else x=5;
    PRINT1(d,x);    //(3.3)
    
    if (z=y<0) x=3;
    else if (y==0) x=5;
    else x=7;
    PRINT2(d,x,z);  //(3.4)
    
    if(z =(y==0))x=5;
    x=3;
    PRINT2(d,x,z);  //(3.5)
    
    if(x=z=y); x=3;
    PRINT2(d,x,z);  //(3.6)
    return 0;
}
