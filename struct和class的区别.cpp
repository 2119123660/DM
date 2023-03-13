#include<iostream>
using namespace std;
//struct和class的区别
//struct 默认权限是 公共public
//class  默认权限是  私有private 
class C1
{
    int A;//默认权限 私有	
};

struct C2
{
	int A;//默认权限 公共 
}； 
int main()
{
	//struct 和 class 的区别 
	C1 c1;
	C2 c2;
	
	c1.A=100;
	c2.A =100;
	return 0;
}
