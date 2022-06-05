bool hasCycle(struct ListNode *head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    
    while(fast != NULL && fast->next != NULL && slow != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
        if(slow == fast){
            return 1;
            break;
        }
    }
    return 0;
}

// Submission Detail
// 21 / 21 test cases passed.
// Status: Accepted
// Runtime: 14 ms
// Memory Usage: 7.9 MB
