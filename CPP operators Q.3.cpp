#include <iostream>
using namespace std;
int main()
{
	int total,boys,girls;
	//here total means total no. of students who got 80 percentage of marks
	//boys means total no. of boys got 80% marks and received grade 'A'
	// girls means total no. of girls got 80% marks and received grade 'A'
	
	total= (80*45)/100;
	boys= 17;
	girls= total-boys;
	
	cout<<"The no. girls who recieved grade 'A' is = "<<girls;
	return 0;
}
