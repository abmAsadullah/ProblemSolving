#include <iostream>
using namespace std;

void bubbleSort(int a[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int n, m, mxsum,mnsum,t;
    cin>>t;
    for(int j=0;j<t;j++){
        cin >>n >>m;
        int b[n];
        for(int i =0;i<n;i++){
            cin>>b[i];
        }
        bubbleSort(b, n);
        mxsum = 0;
        for(int i = m;i<n;i++){
            mxsum+=b[i];
        }

        mnsum = 0;
        for(int i = 0;i<n-m;i++){
            mnsum+=b[i];
        }
        cout <<mxsum -mnsum <<endl;
    }

}
