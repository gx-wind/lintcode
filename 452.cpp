#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode * removeElements(ListNode * head, int val) {
    // write your code here
    ListNode *newHead = new ListNode(0);
    ListNode *p = newHead;
    newHead->next = head;
    while(p->next) {
        if (p->next->val == val)
            p->next = p->next->next;
        else 
            p= p->next;
    }
    return newHead->next;
}

