#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("����������");
		scanf("%s",&password);
		if(strcmp(password,"123456")==0)//�ȺŲ��������Ƚ������ַ����Ƿ����
		//Ӧ��ʹ�ÿ⺯�� strcmp
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else{
			printf("�������\n"); 
		}
	}
	if(i==3)
	{
		printf("��������������˳�����"); 
	}
}
