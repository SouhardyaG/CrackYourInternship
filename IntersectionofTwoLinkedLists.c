/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if(headA == NULL || headB ==NULL){
        return NULL;
    }
    struct ListNode *a_pointer = headA;
    struct ListNode *b_pointer = headB;
    while(a_pointer != b_pointer){
        if(a_pointer == NULL){
            a_pointer = headB;
        }
        else{
            a_pointer = a_pointer -> next;
        }
        if(b_pointer == NULL){
            b_pointer = headA;
        }
        else{
            b_pointer = b_pointer -> next;
        }
    }
    return  b_pointer;
}


// 39 / 39 test cases passed.
// Status: Accepted
// Runtime: 38 ms
// Memory Usage: 13.8 MB
