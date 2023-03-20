#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	float sum = a+b;
	float subtraction= a-b;
	float multiplication= a*b;
	float division= a/b;
	cout<<"The sum is:"<<sum;
	cout<<"\nThe subtraction is:"<<subtraction;
	cout<<"\nThe multiplication is:"<<multiplication;
	cout<<"\nThe division is:"<<division;
	
	return 0;
}
