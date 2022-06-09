/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    while(head != NULL){
        next = head -> next;
        head -> next = prev;
        prev = head;
        head = next;
    }
    head = prev;
    return head;
}

// 28 / 28 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 6.4 MB
