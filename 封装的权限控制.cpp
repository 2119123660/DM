#include<iostream>
using namespace std;
//����Ȩ��
//����Ȩ�� pubilc       ��Ա ���ڿ��Է��ʣ�������Է��� 
//����Ȩ�� protected    ��Ա ���ڿ��Է��ʣ����ⲻ�ܷ��� 
//˽��Ȩ�� private      ��Ա ���ڿ��Է��ʣ����ⲻ�ܷ��� 
class Person
{
public:
	//����Ȩ��
	string name;
	
protected:
    //����Ȩ��
	string car;
	
private:
    //˽��Ȩ��
	int password; 
	void func()
	{
		name="����";
		car="���г�";
		password=123456l; 
	}
};
int main()
{
	//ʵ�����������
	Person p1;
	p1.name="����"; 
	//p1.car="����"������Ȩ�ޣ������޷����� 
	//p1.password=123456;  
}
