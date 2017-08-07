#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int computeFine(int returnD, int returnM, int returnY, int dueD, int dueM, int dueY) {
  // year
  if (returnY <= dueY) {
    // month
    if (returnM <= dueM) {
      // day
      if (returnD <= dueD) {
        return 0;
      }
      return 15 * (returnD - dueD);
    }

    if (returnY < dueY) {
      return 0;
    }
    return 500 * (returnM - dueM);
  }
  return 10000;
}

int main() {
    int returnD;
    std::cin >> returnD;
    int returnM;
    std::cin >> returnM;
    int returnY;
    std::cin >> returnY;

    int dueD;
    std::cin >> dueD;
    int dueM;
    std::cin >> dueM;
    int dueY;
    std::cin >> dueY;

    int fine = computeFine(returnD, returnM, returnY, dueD, dueM, dueY);

    cout << fine << endl;
    return 0;
}
