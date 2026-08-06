#include <bits/stdc++.h>
using namespace std;

void reverseArray (int a[], int i, int n) {

    if (i >= n/2) return;
    swap (a[i], a[n-i-1]);
    reverseArray (a, i+1, n);   // using 1 variables

}

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    reverseArray (a, 0, n);

    cout << "Reversed array is : ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}