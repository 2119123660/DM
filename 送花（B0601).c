#include <stdio.h>
#include <math.h>
int main()
{
    int i=1,b;
    int sum=0;
    for(i=1;i<=30;i++)
    {
        b=pow(2,i-1);
		printf("day=%d,flower=%d\n",i,b);
		sum+=b;
     }
    printf("sum=%d",sum);
    return 0;
}
