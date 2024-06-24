// CPP_SOLENHOHONX.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "nhap x\n";
    cin >> x;
    cout << "ket qua la:";
    for (int i = 0; i < x; i++)
    {
        if (i % 2 != 0)
            cout << i << "";
    }

}