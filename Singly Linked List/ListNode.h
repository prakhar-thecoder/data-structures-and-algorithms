#ifndef LISTNODE_H
#define LISTNODE_H

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *link) : val(x), next(link) {}

    void traverse () {
    ListNode *temp = this;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
};

#endif