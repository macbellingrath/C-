//
//  main.cpp
//  LL
//
//  Created by Mac Bellingrath on 8/4/17.
//  Copyright © 2017 McmillanBellingrath. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstddef>
#include <cmath>
#include <set>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};


class Solution{
public:
    Node* removeDuplicates(Node *head){
        // check head for null
        Node *h = head;
        if (h == NULL) return h;

        Node *current = head;
        Node *next = current->next;
        set<int> xs;

        xs.insert(current->data);

        while (current != NULL) {
            // check if next node is in list
            if (xs.find(next->data) != xs.end()) {
                xs.insert(next->data);
                current = next;
                next = next->next;
            } else {
                current->next = next->next;
                next = next->next;
            }
        }

        return head;
    }
};


int main() {
    return 0;
}
