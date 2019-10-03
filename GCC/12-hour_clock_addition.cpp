//Given two positive integers num1 and num2, the task is to find the sum of the two numbers on a 12 hour clock rather than a number line.
#include <iostream>
using namespace std;
int main()
{
	//code
	int t;
	cout<<"Enter the no. of testcases";
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cout<<"Enter the two numbers a and b";
	    cin>>a>>b;
	    int sum=0;
	    sum= (a+b)%12;
	    cout<<sum<<endl;
	}
	return 0;
}
