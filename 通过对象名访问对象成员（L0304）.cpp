#include<iostream>
using namespace std;
class Point{
public:
	int x;
	int y;
	void setpoint(int a,int b)
	{
		x=a;
		y=b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
	
};
int main()
{   
    Point op1,op2;
    int i1,j1,i2,j2;
    cin>>i1>>j1>>i2>>j2;
    op1.setpoint(i1,j1);
	op2.setpoint(i2,j2);
	i1=op1.getx();
	j1=op1.gety();
	cout<<"op1 i="<<i1<<" j="<<j1<<endl;
	i2=op2.getx() ;
	j2=op2.gety() ;
	cout<<"op2 i="<<i2<<" j="<<j2<<endl;
	return 0;
}
