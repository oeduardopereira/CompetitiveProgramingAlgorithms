#include <iostream>
#include <string>
using namespace std;

int main () {
    int n, x = 0;
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op.find("+") < 3) {
            x++;
        } if (op.find("-") < 3) {
            x--;
        }
    }
    cout << x;    
    return 0;
} 