#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    string st;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >>st;
        if (st[2]=='+' &&st[0] =='X') sum++;
        else if (st[2]=='-' &&st[0] =='X') sum--;
        else if (st[2]=='X' &&st[0] =='-') --sum;
        else  ++sum;

    }
    cout <<sum <<endl;
    return 0;

}
