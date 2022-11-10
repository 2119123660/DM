#include <stdio.h>
int Age(int n)
{
    if(n==1)
        return 10;
    else
        return Age(n-1)+2;
}
int main()
{
    int n;
    scanf("%d",&n);
    int age=Age(n);
    printf("%d",age);
    return 0;
}
