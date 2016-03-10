// 1.3
/*
 A test case consists of an integer C, which is the store credit you receive,
 and a sequence of integers, which are prices of the available items.
 The output for a test case consists of the indices, i and j (i < j), of the two items whose prices add up to the store credit.
 It is assumed that each test case will have exactly one solution.
 */

#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <stdlib.h>
using namespace std;

int numtests;
int credit;
int numitems;
string results;

int main()
{
    cout << "First line consists of the number of test cases. \nRemaining lines are in the following format.\n";
    cout << "   A line with C , the number of store credit given. \n";
    cout << "   A line with I , the number of items in the store.\n";
    cout << "   A line with all I prices of each item, P , separated by spaces.\n\n";
    
    cout << "Please enter your input:" << endl;
    
    cin >> numtests;
    
    for (int i=0; i < numtests; i++)
    {
        cin >> credit;
        cin >> numitems;
        int prices[numitems];
        for (int j = 0; j < numitems; j++)
        {
            cin >> prices[j];
        }
        bool found = false;
        for (int k = 0; k < numitems; k++)
            for (int l = 0; l < numitems; l++)
                if (k != l)
                    if ( (prices[k] + prices[l] == credit) && (!found) )
                    {
                        if (k < l)
                            results = results + "Case #" + to_string(i+1) + ": " + to_string(k+1) + " " + to_string(l+1) +"\n";
                        if (k > l)
                            results = results + "Case #" + to_string(i+1) + ": " + to_string(l+1) + " " + to_string(k+1) +"\n";
                        found = true;
                    }
    }
    cout << endl << results << endl;
}
