#include<iostream>
using namespace std;
class Volume
{
	public:
		
		double calvol(double side)
		{
			return side*side*side;
		}
		
		double calvol(double l,double h,double b)
		{
			return l*h*b;
		}
		
		double calvol(double radius,char c)
		{
			if(c=='s')
			{
				double p=(double)22/7;
				return p*radius*radius*radius;
			}
			else
				return 0;
		}
		
		double calvol(double r,double l)
		{
			return (22/7)*r*r*l;
		}
		
		double calvol(double r,double l,char c)
		{
			if(c=='c')
			{
				double x=(double)1/3,p=(double)22/7;
				return (p*r*r*l*x);
			}
			else
				return 0;
		}
};
int main()
{
	Volume v;
	cout<<v.calvol(10.0)<<endl;
	cout<<v.calvol(7.0,5.0,8.0)<<endl;
	cout<<v.calvol(5.0,'s')<<endl;
	cout<<v.calvol(6.0,9.0)<<endl;
	cout<<v.calvol(6.0,9.0,'c')<<endl;
}
