#include "defs.h"
    int a[] = {0,1,2,3,4};
int main(int argc, const char * argv[])
{
    int i, *p;
    for ( i=0; i<=4; i++) PR(d,a[i]);//(5.1)
    NL;
    for(p=&a[0]; p<=&a[4]; p++) PR(d,*p);//(5.2)
    NL;NL;
    for(p=&a[0],i=1; i<=5; i++) PR(d,p[i]);//(5.3)
    NL;
    for(p=a, i=0; p+i<=a+4; p++,i++) PR(d,*(p+1));//(5.4)
    NL;NL;
    for( p=a+4; p>=a; p--) PR(d,*p);//(5.5)
    NL;
     for( p=a+4,i=0; i<=4;i++) PR(d,p[-i]);//(5.6)
    NL;
    for(p=a+4;p>=a;p--) PR(d, a[p-a]);//(5.7)
    NL;
    return 0;
}
