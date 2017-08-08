#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    std::vector<string>names;
    std::regex r("[A-Z0-9a-z._%+-]+@gmail.com");

    for (int i=0;i<n;i++){
        string name;
        std::cin >> name;
        string email;
        std::cin >> email;

       if (std::regex_match(email, r))
           names.push_back(name);
    }

    std::sort(names.begin(), names.end());

    for (int i=0; i<names.size();i++){
        std::cout << names[i] << endl;
    }

    return 0;
}
