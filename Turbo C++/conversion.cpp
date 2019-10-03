#include <iostream> 
//for printing stuff
  
void main() 
{ 
    int x = 10; // integer x 
    char y = 'a'; // character y 
    clrscr();//Clears Screen
    //implicit conversion is automatic and can only be done if source is smaller than destination's datatype size  
    // y implicitly converted to int. ASCII 
    // value of 'a' is 97 
    x = x + y; 
  
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    cout << "x = " << x << endl; 
    cout << "y = " << y << endl;
    cout << "z = " << z << endl; 
    
    //explicit conversion is done by us to convert a datatype to a smaller datatype
    float a = 1.2223;//float a
    int b = 2;//int b
    int sum =(int)a+b; //converted float to int and then added to int b
    
    cout<<"Sum = "<<sum;
  
    getch();//for keeping output in output screen 
} 
