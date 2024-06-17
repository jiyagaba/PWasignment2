#include<bits/stdc++.h>
using namespace std;
int main()
{
    double radius,height,volume;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    volume=3.14*pow(radius,2)*height;

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}