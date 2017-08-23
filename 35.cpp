#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL){}
};

ListNode *reverse(ListNode *head) {
    ListNode *middle = NULL, *trail;
    while (head) {
        trail = middle;
        middle = head;
        head = head->next;
        middle->next = trail;
    }
    return middle;
}

int main() {
    return 0;
}
