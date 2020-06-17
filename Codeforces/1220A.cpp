#include <iostream>
#include <string>
using namespace std;

int Cards(int n, string st){
    int sum =0, sum1=0;
    for(int i =0; i<n;i++){
        if(st[i]=='n') sum++;
        else if(st[i]=='z') sum1++;
    }
    if(sum >0){
        for(int i=0;i<sum;i++) cout <<1 <<" ";
    }
    if(sum1 >0){
        for(int i=0;i<sum1;i++) cout <<0 <<" ";
    }
}
int main(){
    int n;
    cin >>n;
    string s;
    cin >>s;
    Cards(n, s);

    return 0;
}
