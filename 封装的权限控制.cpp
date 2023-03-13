#include<iostream>
using namespace std;
//访问权限
//公共权限 pubilc       成员 类内可以访问，类外可以访问 
//保护权限 protected    成员 类内可以访问，类外不能访问 
//私有权限 private      成员 类内可以访问，类外不能访问 
class Person
{
public:
	//公共权限
	string name;
	
protected:
    //保护权限
	string car;
	
private:
    //私有权限
	int password; 
	void func()
	{
		name="张三";
		car="自行车";
		password=123456l; 
	}
};
int main()
{
	//实例化具体对象
	Person p1;
	p1.name="李四"; 
	//p1.car="奔驰"；保护权限，类外无法访问 
	//p1.password=123456;  
}
