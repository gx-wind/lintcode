#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    // write your code here
    ListNode *newHead = new ListNode(0);
    ListNode *p = newHead;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
        } else {
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    if (l1)
        p->next = l1;
    if (l2)
        p->next = l2;
    return newHead->next;
}

int main() {
    return 0;
}
