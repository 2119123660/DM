//���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ�� 
#include<iostream>
#include<string>
using namespace std;
class Student
{
public://����Ȩ��
    //���е����Ժ���Ϊͳһ��Ϊ��Ա
	//���� ��Ա���� ��Ա����
	//��Ϊ ��Ա���� ��Ա���� 
    //���� 
	int ID;
	string name;
	
	//��Ϊ
	//��ʾ������ѧ��
	void showStudent()
	{
		cout<<"������"<<name<<"ѧ��:"<<ID<<endl; 
	}
	
	//��������ֵ
	void setname(string s_name)
	{
		name=s_name;
	 } 
	//��ѧ�Ÿ�ֵ
	void setID(int s_ID)
	{
		ID=s_ID;
	 } 
	
};
int main()
{
	//����һ������ѧ�� ʵ��������
	Student s1;
	s1.setname("����") ; 
	//s1.name="����";
	s1.setID(2004); 
	//s1.ID =1;
	//��ʾѧ����Ϣ
	s1.showStudent() ;
	
	Student s2;
	s2.name="����";
	s2.ID =2;
	s2.showStudent(); 
	system("pause"); 
	
	
	return 0;
}

