#include <iostream>
const int cm=100;
double zhuanhuan(double n)
{
	double y=n/cm;
	return y;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout <<"Enter ur height:";
	double n;
	cin >>n;
	double y=zhuanhuan(n);
	cout <<y <<"m" <<endl;
	return 0;
	
}
