#include<iostream>
#include "ListNode.h"
using namespace std;

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    head->traverse();

    return 0;
}