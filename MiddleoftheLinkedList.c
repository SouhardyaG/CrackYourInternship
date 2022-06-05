struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    while(fast != NULL && fast->next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}


// 36 / 36 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 5.7 MB
