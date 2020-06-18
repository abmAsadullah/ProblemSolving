#include <bits/stdc++.h>
using namespace std;
/*
 * A B M Asadullah
 * Manarat International University, Bangladesh
 * Completed the timeConversion function below.
 */
string timeConversion(string s) {

    if(s[8]=='P'){
        if(s[0]=='0' & s[1]=='1'){
            s[0]= '1';
            s[1]= '3';
        }
        else if(s[0]=='0' & s[1]=='2'){
            s[0]= '1';
            s[1]= '4';
        }
        else if(s[0]=='0' & s[1]=='3'){
            s[0]= '1';
            s[1]= '5';
        }
        else if(s[0]=='0' & s[1]=='4'){
            s[0]= '1';
            s[1]= '6';
        }
        else if(s[0]=='0' & s[1]=='5'){
            s[0]= '1';
            s[1]= '7';
        }
        else if(s[0]=='0' & s[1]=='6'){
            s[0]= '1';
            s[1]= '8';
        }
        else if(s[0]=='0' & s[1]=='7'){
            s[0]= '1';
            s[1]= '9';
        }
        else if(s[0]=='0' & s[1]=='8'){
            s[0]= '2';
            s[1]= '0';
        }
        else if(s[0]=='0' & s[1]=='9'){
            s[0]= '2';
            s[1]= '1';
        }
        else if(s[0]=='1' & s[1]=='0'){
            s[0]= '2';
            s[1]= '2';
        }
        else if(s[0]=='1' & s[1]=='1'){
            s[0]= '2';
            s[1]= '3';
        }
    }
    else if(s[0] == '1' && s[1]=='2' && s[8]=='A'){
            s[0]= '0';
            s[1]= '0';
    }
    s.pop_back();
    s.pop_back();
    return s;

}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
