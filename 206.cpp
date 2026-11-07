// 206 solution

#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = nullptr;
    }
};

ListNode* reverseList(ListNode* head) {

    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {

        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

    return prev;
}

void printList(ListNode* head) {

    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }

    cout << "NULL" << endl;
}

int main() {

    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    cout << "Enter linked list elements: ";

    for (int i = 0; i < n; i++) {

        int x;
        cin >> x;

        ListNode* newNode = new ListNode(x);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    cout << "Original Linked List: ";
    printList(head);

    head = reverseList(head);

    cout << "Reversed Linked List: ";
    printList(head);

    return 0;
}

/*
leetode solution

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {

            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }
};

*/