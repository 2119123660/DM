//写一个函数，每调用一次这个函数，就会将num的值增加1
#include<stdio.h>
void Add(int* p)
{
	//*p++;//0 0 0
	//++的优先级高于*
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
