#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector <int> vec;

    for (int i = 1; i <= sqrt(n); i++) {  //  optimal , TC = O(sqrt(n))
        if (n % i == 0) {
            vec.push_back(i);
            if (i != n / i) {
                vec.push_back(n / i);
            }
        }
    }

    sort (vec.begin(), vec.end());
    for (auto it : vec) {
        cout << it << " ";
    }
    
    cout << endl;
}

int main(){

    int n;
    cout << "Enter a no : "; 
    cin >> n;

    printDivisors(n);

    return 0;
}