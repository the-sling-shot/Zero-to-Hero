#include <map>
#include<iostream>
using namespace std;

// an implementation of rule 30:
// https://en.wikipedia.org/wiki/Rule_30

string step(string level, map<string, string> rules){
    level = "  " + level + "  ";

    string result = "";

    for (int i = 0; i < level.length() - 2; i++) {
        result = result + rules[level.substr(i, 3)];
    }

    return result;
}

int main(){
    map<string, string> rules;

    rules["   "] = " ";
    rules["  X"] = "X";
    rules[" X "] = "X";
    rules[" XX"] = "X";
    rules["X  "] = "X";
    rules["X X"] = " ";
    rules["XX "] = " ";
    rules["XXX"] = " ";

    string level = "X";

    int LEVELS = 20;

    for (int i = 0; i < LEVELS; i++) {
        cout << string(LEVELS - i, ' ') + level + "\n";
        level = step(level, rules);
    }

    return 0;
}
