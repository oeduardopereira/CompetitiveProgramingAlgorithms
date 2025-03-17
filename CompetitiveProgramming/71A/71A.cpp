#include <iostream>
#include <string>
using namespace std;

int main () {
    int n;
    cin >> n;
    string words[n] = {};

    for (int j = 0; j < n; j++) {
        cin >> words[j];
    }
    
    for (int i = 0; i < n; i++) {
        int wlen = words[i].length();
        if (wlen > 10) {
            char fl = words[i][0];
            char lf = words[i][wlen - 1];
            cout << fl << wlen - 2 << lf << endl;
        } else {
            cout << words[i] << endl;
        }
    }
    return 0;
}