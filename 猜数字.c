#include<stdio.h>
#include<stdlib.h>//����rand�����ͷ�ļ� 
#include<time.h>//time���������ͷ�ļ� 
void menu()
{
	printf("***************************\n");
    printf("***   1.play   0.exit   ***\n");
    printf("***************************\n");
}
//rand �ķ�ΧΪ0- RAND_MAX(32767)֮�� 
void game()//�����ķ�������Ϊvoid 
{
	char a;
	int guess;
	int ret=0;         
	ret = rand()%100;//1.����1-100�����,%100�����ɵľ��� 
	while(1)//2.������ 
	{
		printf("�������:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("�´���\n"); 
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("\a��ϲ�㣬�¶���\n");
			break; 
		}
		
	}
	//printf("%d\n",ret);
}
int main()
{
	char name;
	int input=0;
	srand((unsigned int)time(NULL));//�����ص�ֵǿ������ת��Ϊunsigned int 
	//��ʹ��rand֮ǰ��Ҫʹ��srand
	// srand����ʹ��һ��ʱ����������������������ʼ�� 
	//time_t*timer
	do
	{
		
		menu();//���ú�����ӡ�˵�
		printf("�װ�����ң���ѡ��>:");//ѡ���Ƿ�����Ϸ 
		scanf("%d",&input);//�û�������֣��浽input
		switch(input)
		{
			case 1://���������Ϸ 
				game();
				
				break;
			case 0://�˳���Ϸ 
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
		
	}while(input);
	return 0;
}
