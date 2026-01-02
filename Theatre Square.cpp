#include <iostream>
using namespace std;

int main() {
    long long int  n, m, a;
    cin >> n >> m >> a;



    long long int rowCount = (n + a - 1) / a;
    long long int colCount = (m + a - 1) / a;

    long long int total = rowCount * colCount;

    cout << total << endl;

    return 0;
}
