
//十位上为9，除10商9 
#include<stdio.h>
int main()
{
	int i=0;
	int count;
	for(i=0;i<=100;i++)
	{
		if(i%10==9||i/10==9)//个位上为9，除10余9
		    count++;
	}
	printf("count=%d\n",count);
	return 0;
}
