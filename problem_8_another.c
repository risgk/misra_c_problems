#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i;
    int x=7;
    int tab[]={0,1,2,3,4,5,6,7,8,9,0xa,0xb,0xc,0xd,0xe,0xf};
    int tabsize=sizeof(tab)/sizeof(tab[0])-1;
    for(i=1; i<=tabsize; i++){
        printf("i=%d, tab[i]=%d,tabsize=%d x=%d \n",i,tab[i],tabsize,x);//(8.1)
        if(tab[i]==x){
            break;
        }
    }
    return 0;
}
