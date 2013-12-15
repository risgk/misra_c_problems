#define PRINT(format,x) printf(#x " = %" #format "\n",x)

int integer = 5;
char character = '5';
char * string = "5";

int main(int argc, const char * argv[])
{
    PRINT(d, string); PRINT(d, character); PRINT(d,integer); //(2.1)
    PRINT(s, string); PRINT(c, character); PRINT(c,integer=53); //(2.2)
    PRINT(d, ('5' > 5));                                    //(2.3)
    
    {
        int x = -2;
        unsigned int ux = -2;
        PRINT(o,x); PRINT(o,ux); //(2.4)
        PRINT(d,x/2); PRINT(d,ux/2); //(2.5)
        PRINT(o,x>>1); PRINT(o,ux>>1); //(2.6)
        PRINT(d,x>>1); PRINT(d,ux>>1); //(2.7)
        return 0;
        
    }
}
