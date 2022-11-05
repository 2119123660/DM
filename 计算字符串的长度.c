#include <stdio.h>

int main()
{
    int len=0;
    char a[999];
    gets(a);
    len=sizeof(a)/sizeof(a[0]);
    printf("%d",len);
    return 0;
}

