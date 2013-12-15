#include "defs.h"
int main(int argc, const char * argv[])
{
    // insert code here...
    struct {
        int part_number;
        char * description;
    } parttab[]={
        046, "left-handed widget",
        047, "right-handed widget",
        125, "frammis"
    };
    for (int i=0; i<3; i++){
        PRINT1(d, parttab[i].part_number);NL;PRINT1(s, parttab[i].description);//(7.1)
}
    return 0;
}
