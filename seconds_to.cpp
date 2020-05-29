#include <iostream>
#include <cmath>
const int sixty=60;
const int day=24;

int scd(long long x,int y,int b,int c)
{
	int z=x-y*24*3600-b*3600-c*60;
	return z;
}
int min(long long x,int y,int a)
{
	int z=(x-y*24*3600-a*3600)/60;
	return z;
}

int hour(long long x,int y)
{
	int z=(x-y*day*pow(sixty,2))/pow(sixty,2);
	return z;
}

int days(long long x)
{
	int y=x/(3600*day);
	return y;
}
int main()
{
	using std::cout;
	cout <<"Seconds:";
	long long a;
	std::cin >>a;
	int _day=days(a);
	int _hour=hour(a,_day);
	int _min=min(a,_day,_hour);
	int _scd=scd(a,_day,_hour,_min);
	cout <<a <<"seconds=" <<_day <<"days," <<_hour <<"hours," <<_min <<"minutes," <<_scd <<"seconds." <<std::endl;
	return 0;
}
