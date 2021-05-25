/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;
class shape
{
	virtual int Noofsides()=0;
};
class TRAPEZOID: shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in trapezoid is: 4 "<<endl;
	}
};
class TRIANGLE : shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in triangle is: 3"<<endl;
	}
};
class HEXAGON : shape
{
	public :
	int Noofsides()
	{
		cout<<"No. of sides in hexagon is: 6"<<endl;
	}
};
int main()
{
	TRAPEZOID trapezoid;
	TRIANGLE triangle;
	HEXAGON hexagon;
	trapezoid.Noofsides();
	triangle.Noofsides();
	hexagon.Noofsides();
}