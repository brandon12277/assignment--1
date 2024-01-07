#include<iostream>
using namespace std;
class Leap
{
	private:
		int year;
	public:
		Leap(int y)
		{
			year=y;
		}
		~Leap()
		{
			if((year%4==0 && year%100!=0) || year%400==0)
				cout<<year<<" is a Leap year\n";
			else
				cout<<year<<" not a Leap Year\n";
		}
};
int main()
{
	int y;
	cout<<"Enter Year : ";
	cin>>y;
	Leap year(y);
	
	
}
