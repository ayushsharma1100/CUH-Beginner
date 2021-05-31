#include<iostream>
using namespace std;
class A
{
	public: 
	int a;
	int b;
	int c;
	void sum(int a,int b)
	{
		c=a+b;
		cout<<"Sum is: "<<c<<endl;
	}
};
class B
{
	public: 
	int a;
	int b;
	int c;
	void sub(int a,int b)
	{
		c=a-b; 
		cout<<"Subtraction is: "<<c;
	}
};
class C: public A,public B
{
	public:
	void print(int a,int b)
	{
	cout<<"value of a: "<<a<<endl;
	cout<<"value of b: "<<b<<endl;
	}
};
int main()
{
	C o;
	o.print(30,70);
	o.sum(30,70);
	o.sub(30,70);
}
