//
//  main.cpp
//  BitwiseAnd
//
//  Created by Mac Bellingrath on 8/10/17.
//  Copyright © 2017 Mac Bellingrath. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t, n, k;
    cin>>t;

    for (int p = 0; p < t; ++p) {
        int max = 0;
        cin >> n >> k;
        for (int i = 1; i < k; ++i) {
            for (int j = i+1; j <= n; ++j) {
                if ((i&j) > max && (i&j) < k) max = (i&j);
            }
        }
        cout << max << endl;
    }
}
