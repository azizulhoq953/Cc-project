
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    float b;
    cin >> a >> b;

    if ((a%5==0) && ( b>(a+0.50)))
    {
        cout << (b-a-0.50)<< endl;
    }
    else
    {
        cout <<b << endl;
    }

    return 0;
}

