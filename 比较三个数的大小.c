#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	int tmp;
	scanf("%d%d%d",&a,&b,&c);
	//�㷨ʵ��
	//a�з����ֵ��b��֮��c�з���Сֵ
	if(a<b)
	{
		tmp=a;
		a=b;
		a=tmp;
	 } 
	 if(a<c)
	 {
	 	tmp=a;
	 	a=c;
	 	c=tmp;
	 }
	 if(b<c)
	 {
	 	tmp=b;
	 	b=c;
	 	c=tmp;
	 }
	 printf("%d%d%d",a,b,c);
	return 0;
	
}
