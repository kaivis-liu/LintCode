/**
 * Definition of ListNode
 * 
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 * 
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
  /**
   * @param head: The first node of linked list.
   * @return: The new head of reversed linked list.
   */
  ListNode *reverse(ListNode *head) {
    // write your code her
    if(head==NULL || head->next==NULL) return head;
    ListNode* tmp;
    ListNode* pre=head,*p1=pre->next;
        
    while(p1!=NULL){
      tmp=p1;
      p1=p1->next; pre->next=p1;
      tmp->next=head; head=tmp;
    }
    return head;
  }
};
