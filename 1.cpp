
#include<iostream>
using namespace std;
#define pi 3.14
class Circle
{
public:
	double r;
	double area()
	{
		
		return pi*r*r;
	}
};
class Circle2
{
	private:
		double r;
		public:
		    Circle2(double radius){
				r = radius;
			}
			double area2()
			{
				return pi*r*r;
			}
};
class Parent
{ 
	protected:
		double radius;
};
class Child:public Parent 
{
	
public:
    Child(double r){
		radius = r;
	}
	double area3(){
        return pi*radius*radius;

	}

};
int main()
{
	char ch;
	cout<<"select an option\n";
	cout<<"A)Public\n";
	cout<<"B)Private\n";
	cout<<"C)protected\n";
	cin>>ch;
	switch(ch)
	{
		case 'A':
			case 'a':
				{
					Circle c;
	cout<<"enter a radius"<<endl;
	cin>>c.r;
	cout<<"area of the circle having radius "<<c.r<<" ="<<c.area();
	break;
				}
				case 'B':
					case 'b':
						{
							double r;
							cout<<"enter a radius"<<endl;
	                        cin>>r;
							Circle2 c(r);
							
	
	cout<<"area of the circle having radius "<<r<<" ="<<c.area2();
	break;
						}
						case 'C':
					case 'c':
						{
							// member function of the derived class can
    // access the protected data members of the base class
	         double r;
	         cout<<"enter a radius"<<endl;
	         cin>>r;
							Child c(r);
							
	         cout<<"area of the circle having radius "<<r<<" ="<<c.area3();
	break;
						}
	}
	return 0;
}

