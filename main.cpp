#include "Headers.h"
int main(int argc, char *args[])
{

	const float pi = M_PI;
	int A = 10;
	int freq = 44000;
	int time = 2;
	int depth = 8;

	ofstream out;
	out.open("../CSV/sin.csv");
	if(out.is_open())
	{
		for(double i=0; i < 2 * pi * time; i+=pi/(freq*depth))
		{
			out << sin(i*freq)*A <<","<< endl;
		}
	}
	out.close();
	out.open("../CSV/triangle.csv");
	if(out.is_open())
	{
		for(double i=0; i < 2*pi * time; i+=pi/180)
		{
			out << A*asin(sin(i*freq))/1.5 <<","<< endl;
		}
	}
	out.close();
	cout << "End of program" << endl;
	return 0;
}
