#include<iostream> 
using namespace std;
//1.���캯���ķ��༰����
//���� 
//���ղ�������  �޲������죨Ĭ�Ϲ��죩���вι���
//�������ͷ���  ��ͨ����  �������� 
class Person
{
public:
	//���캯��
	Person()
	{
		cout<<"Person ���޲������캯������"<<endl;
	}
	Person(int a)
	{
		age=a;
		cout<<"Person ���в������캯������"<<endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		//������������ϵ��������ԣ������������� 
		age=p.age;
		cout<<"Person �Ŀ������캯��"<<endl;
    }
	~Person()
	{
		cout<<"Person ��������������"<<endl;
	 } 

	int age;
};
//����
void test01()
{
	Person p1;//Ĭ�Ϲ��캯������ 	
	//1.���ŷ�
	//Person p2(10); //�вι��캯������ 
	//Person p3(p2);//�������캯��
	
	//ע������
	//����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��();
	//��Ϊ�������д��룬������Ϊ��Ϊ��һ��������������������Ϊ�ڴ������� 
	//void func();
	
	//cout<<"p2��������"<<p2.age<<endl;
	//cout<<"p3��������"<<p3.age<<endl; 
	
	
	//2.��ʾ��
	//Person p2=Person(10);//�вκ���
	//Person p3=Person(p2);//�������� 
	//Person(10);//��������    �ص㣺��ǰ�н�����ϵͳ������������������ 
    //��Ҫ���ÿ������캯�� ��ʼ���������� 
    //����������ΪPerson(P3)==Person p3;���������
	
	 
	//3.��ʽת���� 
	Person p4=10;//�൱��д��Person p4=Person(10);   �вι���
	Person p5= p4; //�������� 
 } 
int main()
{
	test01();
	return 0;
}
