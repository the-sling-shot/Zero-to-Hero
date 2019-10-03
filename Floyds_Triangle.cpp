//Given a number N. The task is to print Floyd's triangle with N lines.
#include<iostream>
using namespace std;
int main() {
	int t,n;
	cout<<"Enter number of testcases";
	cin>>t;
	while(t--)
	{
		cout<<"Enter number of lines";
	    cin>>n;
	    int i,j,c=0;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<=i;j++)
	        {
	            cout<<++c<<" ";
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
