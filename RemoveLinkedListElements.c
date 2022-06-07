/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    if(head == NULL){
        return NULL;
    }  
    while (head && head->val == val){
        head = head->next;
    }
    struct ListNode *temp = head, *prev = NULL;
    while (temp != NULL) {
        if (temp->val == val){
            prev->next = temp->next;
        }
        else{
            prev = temp;
        }
        temp = temp->next;
    }
    return head;
}


// 66 / 66 test cases passed.
// Status: Accepted
// Runtime: 19 ms
// Memory Usage: 7.7 MB
