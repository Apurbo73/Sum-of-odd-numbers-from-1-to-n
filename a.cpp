#include <bits/stdc++.h>

using namespace std;

int main() {
    // Odd Numbers and Their Sum Total:
    int n;
    int a = 0;
    int sum = 0;
    cin >> n;
    cout << "The Odd Numbers Are : ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum = sum + i;
            cout << i << " ";

        }
    }
    cout << endl;
    cout << "The Sum Of The Odd Numbers is : " << sum;

}