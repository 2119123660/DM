#include<iostream>
#include<cmath>
using namespace std;
class Complex
{
private:
	double real;
	double imag;
public:
	void init(double r,double i)
	{
		real=r;
		imag=i;
	}
	double abscomplex()
	{
		double t;
		t=real*real+imag*imag;
		return sqrt(t);
	}
	
};
int main()
{
	double r,i;
	cin>>r>>i;
	Complex A;
	A.init(r,i);
	cout<<A.abscomplex()<<endl;
	return 0;
}
