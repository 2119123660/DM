//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
#include<stdio.h>
void Add(int* p)
{
	//*p++;//0 0 0
	//++�����ȼ�����*
	(*p)++;
}
int main()
{
	int num=0;
	Add(&num);
	printf("num=%d\n",num);
	Add(&num);
	printf("num=%d\n",num);
	Add(&num);
	printf("num=%d\n",num);
	return 0;
} 
