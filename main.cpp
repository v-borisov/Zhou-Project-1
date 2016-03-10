// 1.2
// Reverse Words is an easy practice problem.
// Given a list of space separated words,
// reverse the order of the words.

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    stack<string> words;
    string strraw;
    string ready;
    
    cout << "Please enter your sentence to be reversed: " << endl;
    getline(cin,strraw,'\n');
    
    cout << endl << "Your words are:" << endl << strraw << endl;
    string cur;
    
    // reversing
    for (int i = 0; i < strraw.size(); i++)
    {
        if (strraw[i] != ' ')
        {
            cur = cur + strraw[i];
        }
        else if (strraw[i] == ' ')
        {
            words.push(cur);
            cur.clear();
        }
    }
    words.push(cur); //for last word without space
    cout << endl;
    
    // printing reversed
    cout << "Your reversed words are:" << endl;
    while( !(words.empty()) )
    {
        cout << words.top() << " ";
        words.pop();
    }
    
    cout << ready << endl << endl;
}