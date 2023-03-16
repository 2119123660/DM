#include<iostream>
#include<cstdlib> 
using namespace std;
class timer{
public:
	timer()//无参数的构造函数
	{
		seconds=0; 
	 } 
	timer(char *t)//含一个数字串参数的构造函数
	{
		seconds=atoi(t);//atoi实现可以将数字字符串转换为整数
		//由于没有考虑正负号，所以只能转换为正数 
		
	 } 
	timer(int t)//含一个整型参数的构造函数
	{
		seconds=t; 
	 } 
	timer(int min,int sec)//含两个整型参数的构造函数
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
