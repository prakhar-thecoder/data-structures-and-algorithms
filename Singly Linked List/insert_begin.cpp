#include<iostream>
#include "ListNode.h"
using namespace std;

ListNode* insert_begin(ListNode *head, int data) {
    ListNode* new_node = new ListNode(data, head);
    head = new_node;

    return head;
}

int main () {
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    
    head = insert_begin(head, 0);

    head->traverse();

    return 0;
}