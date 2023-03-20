#include<iostream>
using namespace std;
int main()
{
	int n, a, b, c;
	//n is the 3 digit no. and a,b,c is the first, second, and last digit respectively
	cout<<"Enter a three digit no.:";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	c=n%10;
	int sum;
	sum= a+b+c;
	cout<<"The sum of digits of a three digit no. is:"<<sum;

	return 0;
}
