#include<iostream>
using namespace std;

int main()
{
    int *intList; //Line 1
    int arraySize; //Line 2

    cout << "Enter array size: "; //Line 3
    cin >> arraySize; //Line 4
    cout << endl; //Line 5
    
    intList = new int[arraySize]; //Line 6
}