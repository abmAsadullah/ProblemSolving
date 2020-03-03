#include <iostream>
using namespace std;

int main()
{
    int a[5][5];
    int m, n, x, y;
    for(int i =0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin >>a[i][j];
            if(a[i][j]==1){
                m = i;
                n = j;
            }
        }
    }
    if(m>2) m=m-2;
    else m = 2-m;
    if(n>2) n = n-2;
    else n = 2-n;
    x = m + n;
    cout <<x<<endl;
    return 0;
}
