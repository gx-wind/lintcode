#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *addLists(ListNode *l1, ListNode *l2) {
    // write your code here
    ListNode *newHead = new ListNode(0);
    ListNode *p = newHead;
    int c = 0;
    while (l1 || l2) {
        if (l1) {
            c += l1->val;
            l1 = l1->next;
        }
        if (l2) {
            c += l2->val;
            l2 = l2->next;
        }
        p->next = new ListNode(c%10);
        p = p->next;
        c /= 10;
    }
    if (c > 0)
        p->next = new ListNode(c);
    return newHead->next;
}

int main() {
    return 0;
}
