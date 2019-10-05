#include<iostream>
using namespace std;

int gcd(int a,int b)
{
 if(b==0)
     return a;
return gcd(b,a%b);
}

int main(){
int x,y;
cout<<"enter two numbers"<<endl;
cin>>x>>y;
cout<<"Greatest common divisor of"<<x<<"and"<<y<"is"<<gcd(x,y)<<endl;
return 0;
}
