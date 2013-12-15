#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i=0,x=7;
    int tabsize= 15;
    int tab[]={0,1,2,3,4,5,6,7,8,9,0xa,0xb,0xc,0xd,0xe,0xf};
    while(i<tabsize & tab[i]!=x){
        i++;
    printf("i=%d, tab[i]=%d,tabsize=%d x=%d \n",i,tab[i],tabsize,x);//(8.1)
    }
    return 0;
}
