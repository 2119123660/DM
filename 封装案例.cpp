//设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号 
#include<iostream>
#include<string>
using namespace std;
class Student
{
public://公共权限
    //类中的属性和行为统一称为成员
	//属性 成员属性 成员变量
	//行为 成员函数 成员方法 
    //属性 
	int ID;
	string name;
	
	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout<<"姓名："<<name<<"学号:"<<ID<<endl; 
	}
	
	//给姓名赋值
	void setname(string s_name)
	{
		name=s_name;
	 } 
	//给学号赋值
	void setID(int s_ID)
	{
		ID=s_ID;
	 } 
	
};
int main()
{
	//创建一个具体学生 实例化对象
	Student s1;
	s1.setname("王五") ; 
	//s1.name="张三";
	s1.setID(2004); 
	//s1.ID =1;
	//显示学生信息
	s1.showStudent() ;
	
	Student s2;
	s2.name="李四";
	s2.ID =2;
	s2.showStudent(); 
	system("pause"); 
	
	
	return 0;
}

