#include<iostream>
using namespace std;
const double PI=3.14;
//class�������һ���࣬���������ŵľ���������
class Circle
{
	//����Ȩ�� 
	//����Ȩ�� 
public:
	//����
	//�뾶 
	int r;
	//��Ϊ 
	//��ȡԲ���ܳ� 
	double calculateZC()
	{
		return 2*PI*r;
		
	}
};
int main()
{
	//ͨ��Բ�ഴ�������Բ������ 
	//ʵ������ͨ��һ���࣬����һ������Ĺ��̣� 
	Circle c1;
	c1.r=10;
	cout<<"Բ���ܳ�Ϊ:"<<c1.calculateZC()<<endl;
	return 0;
}
