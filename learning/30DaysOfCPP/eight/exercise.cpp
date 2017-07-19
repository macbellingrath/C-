#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
  int n;
  string name;
  int num;

  cin >> n;

  std::map<string, int> phoneBook;

  for (int i = 0;i < n; i++) {
      cin >> name;
      cin >> num;

      phoneBook[name] = num;
  }

  while(cin >> name) {
      if (phoneBook.find(name) != phoneBook.end()) {
          cout << name << "=" << phoneBook.find(name)->second << endl;
      } else {
          cout << "Not found" << endl;
      }
  }
  return 0;
}
