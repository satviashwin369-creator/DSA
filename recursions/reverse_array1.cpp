#include <bits/stdc++.h>
using namespace std;

void reverseArray (int a[],int l, int r) {

    if (l >= r) return;
    swap (a[l], a[r]);
    reverseArray (a, l+1 , r-1);   // using 2 variables

}

int main() {

    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    reverseArray (a, 0, n-1);

    cout << "Reversed array is : ";

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

}