#include <stdio.h>
#define RAMSIZE 30000
#define SEVEN "Hello World!!\n"
int main(int argc, char **argv)
{
    FILE *f;
    int *p;
    int b[RAMSIZE] = {0};
    char c;
    int i = 4, s = 0;
    p = b;
    if ((f = fopen(argv[1], "r")) == NULL)
        return 0;
    while((c=(char)fgetc(f)) != EOF)
    {
        if (c == '1') s+=i;
        else if (c == '0');
        else i<<=1;
        i>>=1;
        if (i == 0)
        {
            if (s == 1)     p++;
            if (s == 2)     p--;
            if (s == 3)     (*p)++;
            if (s == 4)     (*p)--;
            if (s == 5)     putchar(*p);
            if (s == 6)     *p = getchar();
            if (s == 7)     printf(SEVEN);
            i = 4;
            s = 0;
        }
    }
    return 0;
}