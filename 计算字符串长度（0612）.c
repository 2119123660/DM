#include <stdio.h>
int main()
{
    char a;
    int num=0;
    //while(scanf("%c",&a)!=EOF)
	while(~scanf("%c",&a)) //将无数个字符串输入 
    {
        if(a=='\n')
            {
                break;
            }
        num++;
    }
    printf("%d",num);
    return 0;
}
