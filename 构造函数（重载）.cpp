#include<iostream>
using namespace std;
class Location{
public:
	Location(int m,int n)
	{
		X=m;
		Y=n;
	}
	void Init(int initX,int initY)
	{
		X=initX;
		Y=initY;
	}
	int GetX()
	{
		return X;
	}
	int GetY()
	{
		return Y;
	}
private:
	int X;
	int Y;
};
int main()
{
	Location A3(785,980);
	A3.Init(785,980);
	cout<<A3.GetX() <<" "<<A3.GetY() <<endl;
	return 0;
	return 0;
}
