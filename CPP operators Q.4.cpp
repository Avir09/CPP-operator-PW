#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
	//n is the 5 digits number and a,b,c,d is the first, second, third, fourth digit respectively
	
	n= 34982;
	a=n/10000;
	n=n%10000;
	b=n/1000;
	n=n%1000;
	c=n/100;
	n=n%100;
	d=n/10;
	n=n%10;
	
	int sum;
	sum= a+d;
	cout<<"The sum of the first and second last digit of a five digit no. is: "<<sum;
	return 0;
}
