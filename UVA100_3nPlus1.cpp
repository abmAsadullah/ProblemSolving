#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, j;
    while(scanf("%d %d", &i, &j) != EOF){
    int a, b, n, r, f = 0;
    a = i;
    b = j;
    if(a>b){
        int tmp;
        tmp =b;
        b = a;
        a = tmp;
    }
    for(int k=a;k<=b; k++)
    {
        n = k;
        r = 1;
        while(1)
        {
            if(n==1) break;
            if(n%2==1) n= 3*n + 1;
            else n = n/2;
            r++;
        }
        if(r>=f) f=r;

    }
    cout <<i<<" "<<j <<" " <<f<<endl;
    }
    return 0;
}
