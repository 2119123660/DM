#include<iostream>
#include<cstdlib> 
using namespace std;
class timer{
public:
	timer()//�޲����Ĺ��캯��
	{
		seconds=0; 
	 } 
	timer(char *t)//��һ�����ִ������Ĺ��캯��
	{
		seconds=atoi(t);//atoiʵ�ֿ��Խ������ַ���ת��Ϊ����
		//����û�п��������ţ�����ֻ��ת��Ϊ���� 
		
	 } 
	timer(int t)//��һ�����Ͳ����Ĺ��캯��
	{
		seconds=t; 
	 } 
	timer(int min,int sec)//���������Ͳ����Ĺ��캯��
	{
		seconds=min*60+sec; 
	 } 
	int gettime()
	{
		return seconds;
	}
private:
	int seconds;
};
int main()
{
	int x,y;
	cin>>x>>y;
    timer a;
    timer b(10);
    timer c("20");
    timer d(x,y);
    cout<<"seconds1="<<a.gettime()<<endl;
    cout<<"seconds2="<<b.gettime()<<endl;
    cout<<"seconds3="<<c.gettime()<<endl;
    cout<<"seconds4="<<d.gettime()<<endl;
	return 0;
 } 
