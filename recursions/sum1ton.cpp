#include <iostream>
using namespace std;

void total(int i,int sum) {

    if (i < 1) {
        cout << sum;
        return;
    }

    total (i - 1, sum + i);   // parameterized way

}

int main() {

    int n;
    cout << "Enter no : ";
    cin >> n;
    total(n, 0);

}