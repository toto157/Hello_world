#include <iostream>
int yczhuanhuan(int chi)
{
	const int a=12;
	int y=a*chi;
	return y;	
}
double mizhuanhuan(int cun)
{
	const double a=0.0254;
	double y=a*cun;
	return y;
}
double bangzhuanhuan(double bang)
{
	const double a=2.2;
	double y=bang/a;
	return y;
}
double BMI(int cun,double bang)
{
	double m=mizhuanhuan(cun);
	double b=bangzhuanhuan(bang);
	double bmi=b/m/m;
	return bmi;
}
int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout <<"Enter ur height and weight:";
	int chi;
	int cun;
	double bang;
	cin >>chi >>cun >>bang;
	cun=yczhuanhuan(chi)+cun;
	double bmi=BMI(cun,bang);
	cout <<bmi;
	cout <<endl;
}
