#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i = 2;i<n;i++){
    int sum = 0;
    for(int j = 2;j<i;j++){
        if(i%j==0) sum++;
    }
    if(sum == 0) cout << i<<" ";
    }

    return 0;
}
