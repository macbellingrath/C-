#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int multiple = 1; multiple <= 10; multiple++){
      int result = x * multiple;
      cout << x << " x " << multiple << " = " << result << endl;
    }

    return 0;
}
