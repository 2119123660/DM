#include<iostream>
#include<string>
using namespace std;
//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��
//������� 
class Person
{
public:
	//��������
	void setname(string s_name)
	{
		name=s_name;
	}
	//��ȡ����
	string getname()
	{
		return name;
	}
	//��ȡ���� �ɶ���д 
	//������޸ģ�����ķ�Χ������0~150֮�� 
	int getage()
	{
		//age=0;//��ʼ��Ϊ0�� 
		return age;
	}
	//��������
	void setage(int s_age)
	{
	    if(s_age<0||s_age>150)
	    {
	    	age=0;
	    	cout<<"�������������"<<endl;
	    	return ;
		}
		age=s_age;
    }
	 //�������� ֻд
	void setlover(string s_lover)
	{
	 	lover=s_lover;
	} 
private:
	//����  �ɶ���д 
	string name;
	//����  ֻ�� 
	int age;
	//����   ֻд 
	string lover;
}; 
int main()
{
	Person p;
	p.setname("����");
    p.setlover("����"); 
    p.setage(18);
	cout<<"����Ϊ��"<<p.getname() <<endl;
	cout<<"����Ϊ��"<<p.getage()<<endl;
	//cout<<"����Ϊ��"<<p.setlover()<<endl; �����޷����� 
	return 0; 
	
}
