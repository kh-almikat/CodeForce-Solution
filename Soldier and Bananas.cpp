#include <iostream>
using namespace std;
 
int main() {
    long long int k, n, w;
    cin >> k >> n >> w;
 
 
    long long int totalCost = k * w * (w + 1) / 2;
 
 
    if (totalCost > n)
        cout << totalCost - n << endl;
    else
        cout << 0 << endl;
 
    return 0;
}