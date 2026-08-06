#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector <int> vec;

    for (int i = 1; i <= n; i++) {  //  brute force - TC = O(N)
        if (n % i == 0) {
            vec.push_back(i);
        }
    }

    sort (vec.begin(), vec.end());
    for (auto it : vec) {
        cout << it << " ";
    }
}

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;

    printDivisors(n);

    return 0;
}