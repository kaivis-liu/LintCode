/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
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
   * @return: head node
   */
  ListNode *deleteDuplicates(ListNode *head) {
    // write your code here
    ListNode *pre,*p,*tmp;
    if(head==NULL||head->next==NULL) return head;
    pre=head; p=head->next;
    while(p!=NULL){
      if(p->val==pre->val){
	pre->next=p->next;
	tmp=p;
	p=p->next;
	delete tmp;
                
      }
      else { pre=p;p=p->next; }
    }
    return head;
  }
};
