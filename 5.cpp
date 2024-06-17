#include<bits/stdc++.h>
using namespace std;
int main()
{
    char char1, char2;

    cout << "Enter the first character: ";
    cin >> char1;

    cout << "Enter the second character: ";
    cin >> char2;

    int difference = char1 - char2;

    cout << "The difference between the ASCII value is: '" << difference << endl;

    return 0;

}