#include<iostream>
using namespace std;
//struct��class������
//struct Ĭ��Ȩ���� ����public
//class  Ĭ��Ȩ����  ˽��private 
class C1
{
    int A;//Ĭ��Ȩ�� ˽��	
};

struct C2
{
	int A;//Ĭ��Ȩ�� ���� 
}�� 
int main()
{
	//struct �� class ������ 
	C1 c1;
	C2 c2;
	
	c1.A=100;
	c2.A =100;
	return 0;
}
