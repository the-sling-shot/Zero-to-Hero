//c++ program to implement fibonacci sequence
//0 1 1 2 3 5 8 13
#include<bits/stdc++.h>
using namespace std;

int main(){

	std::vector<int> fibonacci;
	int n;
	cin>>n;
	fibonacci.push_back(0); 
	fibonacci.push_back(1);
	
	for(int i=2;i<n;++i){

		fibonacci.push_back(fibonacci[i-1]+fibonacci[i-2]);
		

	}	

	for(int i=0;i<n;++i)
		cout<<fibonacci[i]<<" ";
	cout<<endl;
 


}