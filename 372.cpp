#include <iostream>

using namespace std;

/**
 * Definition of ListNode
 */
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void deleteNode(ListNode *node) {
    // write your code here
    int tmp = node->val;
    node->val = node->next->val;
    node->next = node->next->next;
}
