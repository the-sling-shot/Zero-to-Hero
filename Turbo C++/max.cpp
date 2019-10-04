#include <iostream> 
//for printing and reading stuff
#include<conio.h>
//for keeping output in output screen
void main() 
{
  int a,b,c;//here we will put numbers entered by user
  clrscr();//clears screen
  cout<<"Enter A:";
  cin>>a;
  cout<<"Enter B:";
  cin>>b;
  cout<<"Enter C:";
  cin<<c;
  
  if(a>b && a>c)//is a maximum?
  {
    cout<<"Max = "<<a;
  }
  else if(b>a && b>c)//is b maximum?
  {
    cout<<"Max = "<<b;
  }
  else//c is max if not a and b
  {
    cout<<"Max = "<<c;
  }
  getch();
}
