 int sum = 0;
        ListNode* temp=head;
        while(temp!=NULL){
            sum=(sum)*2+temp->val;
            temp=temp->next;
        }
        return sum;
        
// 102 / 102 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 5.7 MB

*/
  int getDecimalValue(struct ListNode* head){
    struct ListNode* temp = head;
    int count = 0;
    while(temp != NULL){
      count++; 
    }
    int i= count-1;
    int result=0;
    temp=head;
    while(temp!=NULL){ 
      result=result+(pow(2,i)*(temp->val));
      i--;
      temp=temp->next;
    } 
    return result; 
 }
*/

//Time Limit Exceed
