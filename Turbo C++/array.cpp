#include <iostream>
//for printing and reading stuff
#include <conio.h>  
//for clearing and keeping output
void main() 
{ 
   int a[5];//array a of integer is declared with size of 5
   clrscr();//Clears Screen
   int i;//counter variable
   cout<<"Enter array:";
   for(i=0;i<5;i++)
   {
    cin>>a[i];//Entering values in array from user. Note array always starts from 0 index and ends length-1 index
   }
   int sum=0;
   for(i=0;i<5;i++)
   {
    sum=sum+a[i];//Does summation of whole array
   }
   cout<<"Sum = "<<sum;
   getch();//Keeps output screen
} 
