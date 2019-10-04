#include<iostream.h>
//for printing we import this file
#include<conio.h>
//for keeping the output in output screen

void main()
{
  int i,j;//Counter Variables
  clrscr();
  for(i=0;i<6;i++)//6 rows
  {
    for(j=0;j<=i;j++)//columns = rows
    {
      cout<<"*";//printing * for pattern
    }
    cout<<"\n";//Enters new row
  }
  getch();//keeps output in output screen
}
