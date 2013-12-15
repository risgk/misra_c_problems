#include "defs.h"
int main(int argc, const char * argv[])
{
    int i;
    
    struct {
        int part_number;
        char * description;
    } parttab[]={
        46, "left-handed widget",
        47, "right-handed widget",
        125, "frammis"
    };
    for (i=0; i<sizeof(parttab)/sizeof(parttab[0]); i++){
        PRINT1(d, parttab[i].part_number);PRINT1(s, parttab[i].description);NL;
    }
    return 0;
}
