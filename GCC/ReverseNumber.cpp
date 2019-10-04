#include<iostream>
using namespace std;

int num_dig(int n){		// function to find the number of digits a number have
	int dig=1;
	while(n > 9){
		dig = dig * 10;
		n = n /10;
	}
return dig;
}

int rev_numf(int n){		// function to reverse a number
	int num = 0, j;
	j = num_dig(n);
	while(n!=0){
		j = n%10;
		num = num + j*num_dig(n);
		n = n/10;
	}
return num;
}

int main(){
	int num, rev_num;
	cout<<"Enter a number :";
	cin>>num;
	rev_num = rev_numf(num);
	cout<<"\nReverse number : "<<rev_num;
	cout<<endl;
return 0;
}
