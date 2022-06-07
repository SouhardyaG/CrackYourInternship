//General Approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if(list1 == NULL){
        return list2;
    }
    if(list2 == NULL){
        return list1;
    }
    struct ListNode *newhead = NULL;
    if(list1 -> val <= list2 ->val){
        newhead = list1;
        list1 = list1 -> next;
    }
    else{
        newhead = list2;
        list2 = list2 -> next;
    }
    struct ListNode *temphead = newhead;
    while(list1 && list2){
        struct ListNode *temp = NULL;
        if(list1 -> val <= list2 ->val){
            temp = list1;
            list1 = list1 -> next;
        }
        else{
            temp = list2;
            list2 = list2 -> next;
        }
        temphead -> next = temp;
        temphead = temp;
    }
    if(list1){
        temphead -> next = list1;
    }
    else if(list2){
        temphead -> next = list2;
    }
    return newhead;
}

// 208 / 208 test cases passed.
// Status: Accepted
// Runtime: 9 ms
// Memory Usage: 6 MB



//Recursion Approach

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *result = NULL;
    if(list1 == NULL){
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }
    if(list1 -> val <= list2 -> val){
        result = list1;
        result -> next = mergeTwoLists(list1->next, list2);
    }
    else{
        result = list2;
        result -> next = mergeTwoLists(list1, list2 -> next);
    }
    return result;
}

// 208 / 208 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6.1 MB
