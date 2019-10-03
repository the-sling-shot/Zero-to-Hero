/* Problem Statement : You are given a sentence and your job is to find 
    the word along with its frequency.

Example
    input : I am a a boy
    output : I   1
             am  1 
             a   2
             boy 1
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="I am a good boy I love coding";
    string word;

    //create a hashtable
    unordered_map<string,int> hash;

    //Split the sentence into words
    stringstream ss;
    ss<<str;
    while(ss>>word)
        hash[word]++;

    //Looping over the hashtable and printing word along with its frequency 
    for(auto itr=hash.begin();itr!=hash.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    return 0;
}
