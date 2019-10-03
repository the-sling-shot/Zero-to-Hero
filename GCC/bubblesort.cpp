#include <bits/stdc++.h> 
using namespace std;

int main()  
{  
    int n;
    cout << "\nEnter number of elements ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
      cin >> arr[i];
    //bubblesortsort
    int i, j, t;  
    for (i = 0; i < n-1; i++)       
    {
      for (j = 0; j < n-i-1; j++)  
      {
        if (arr[j] > arr[j+1])  
        {
          t = arr[j];
          arr[j] = arr[j+1]
          arr[j+1] = t;
        }
      }
    }
    //print
    cout << "\n";
    for (i = 0; i < n; i++)
      cout << arr[i] <<"\t";
    return 0;  
}  
