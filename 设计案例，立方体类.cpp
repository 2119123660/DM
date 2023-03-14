#include<iostream>
using namespace std;
//设计立方体类
//求出立方体的面积和体积
//分别用全局函数和成员函数判断两个立方体是否相等
class Cube
{
public:
	
	//行为
	
	//设置长
	void setL(int l)
	{
		m_L=l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}

	//设置宽
	void setW(int w)
	{
		m_W=w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H=h;
		
	}
	//获取高
	int getH()
	{
		return m_H;
	}
	// 获取立方体面积
	int calculateS()
	{
		return 2*(m_L*m_H+m_L*m_W+m_W*m_H);
	 } 
	 //获取立方体体积 
	int calculateV()
	{
		return m_L*m_H*m_W;
	}
	bool isSamebyclass(Cube &c)
	{
		if(m_L ==c.getL() &&m_H ==c.getH() &&m_W ==c.getW() )
	    {
		    return true;
	    } 
	    else return false;
	}
private:
    //属性
	int m_L;//长 
	int m_W;//宽 
	int m_H;//高 
} ;
//利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)//引用原始方式传递不用再拷贝一次数据 
{
	if(c1.getL() ==c2.getL() &&c1.getH() ==c2.getH() &&c1.getW() ==c2.getW() )
	{
		return true;
	 } 
	else return false;
}
int main()
{
	//创建一个立方体对象； 
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);   
	cout<<"c1的面积为："<<c1.calculateS() <<endl;
	cout<<"c1的体积为："<<c1.calculateV() <<endl;
	//创建第二个立方体
	Cube c2;
	c2.setL(100);
	c2.setW(10);
	c2.setH(10);   
	//利用全局函数判断 
	bool ret=isSame(c1,c2);
	if(ret)
	{
		cout<<"全局函数判断：c1和c2相等"<<endl; 
	}
	else cout<<"全局函数判断：c1和c2不相等"<<endl;
	//利用成员函数判断 
	ret=c1.isSamebyclass(c2); 
	if(ret)
	{
		cout<<"成员函数判断：c1和c2相等"<<endl; 
	}
	else cout<<"成员函数判断c1和c2不相等"<<endl;
	//cout<<"c2的面积为："<<c2.calculateS() <<endl;
	//cout<<"c2的体积为："<<c2.calculateV() <<endl;
	return 0;
}
