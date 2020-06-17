#include <bits/stdc++.h>
/*
    A B M Asadullah
    Manarat International University, Bangladesh
*/

// Completed the viralAdvertising function below.
using namespace std;

int viralAdvertising(int n) {
    int rec = 5, sum = 0, like;
    for(int i=0;i<n;i++){
        if(i == 0) rec = 5;
        else rec = (rec / 2) * 3;
        like = rec/2;
        sum += like;
    }
    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    cout << result << "\n";

    //fout << result << "\n";

    //fout.close();

    return 0;
}
