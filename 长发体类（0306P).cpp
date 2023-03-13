#include<iostream>
using namespace std;
class Cuboid
{
public:
    float length;
    float width;
    float height;
    float area;
    float v;
    
    void set_value(float a,float b,float c)
    {
    	length=a;
    	width=b;
    	height=c;
	}
    float count_area()
    {
    	
        area= 2*(length*width+length*height+width*height);
	    return area;
	}
    float count_volume()
    {
    	
		v=length*width*height;
		return v;
	}
    void show()
    {
    	cout<<"area="<<area<<",volume="<<v<<endl;
	}
    
};
int main()
{
    Cuboid cc;
        float a,b,c;
        cin>>a>>b>>c;
    cc.set_value(a,b,c);
    cc.count_area();
    cc.count_volume();
    cc.show();
    return 0;
}
