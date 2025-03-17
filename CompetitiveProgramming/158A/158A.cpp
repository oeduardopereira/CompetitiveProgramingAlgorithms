#include <iostream>
using namespace std;

int main () {
    int n, k, x = 0;
    cin >> n >> k;
    int scores[n];

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff = scores[k - 1];

    for (int i = 0; i < n; i++) {
        if (scores[i] > 0 && scores[i] >= cutoff) x++;
    }
    cout << x << endl;
    return 0;
}
