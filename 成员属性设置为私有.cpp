#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性
//设计人类 
class Person
{
public:
	//设置姓名
	void setname(string s_name)
	{
		name=s_name;
	}
	//获取姓名
	string getname()
	{
		return name;
	}
	//获取年龄 可读可写 
	//如果想修改，年龄的范围必须是0~150之间 
	int getage()
	{
		//age=0;//初始化为0岁 
		return age;
	}
	//设置年龄
	void setage(int s_age)
	{
	    if(s_age<0||s_age>150)
	    {
	    	age=0;
	    	cout<<"你这个老妖精！"<<endl;
	    	return ;
		}
		age=s_age;
    }
	 //设置情人 只写
	void setlover(string s_lover)
	{
	 	lover=s_lover;
	} 
private:
	//姓名  可读可写 
	string name;
	//年龄  只读 
	int age;
	//情人   只写 
	string lover;
}; 
int main()
{
	Person p;
	p.setname("张三");
    p.setlover("常静"); 
    p.setage(18);
	cout<<"姓名为："<<p.getname() <<endl;
	cout<<"年龄为："<<p.getage()<<endl;
	//cout<<"情人为："<<p.setlover()<<endl; 数据无法访问 
	return 0; 
	
}
