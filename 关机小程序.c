#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
    char input[20]={0};
	//shutdown -s -t 60
    //system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ���������룺���Ǳ�������ȡ���ػ�\n");
    printf("������\n");
    scanf("%s",input);
    if(strcmp(input,"���Ǳ���")==0)//�Ƚ������ַ���
	//strcmpר�������Ƚ��ַ��� 
	{
		system("shutdown -a");//ȡ���ػ� 
	}
	else
	{
		goto again;
		
	}
	return 0;
}
