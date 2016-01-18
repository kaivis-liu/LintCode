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
   * @param x: an integer
   * @return: a ListNode 
   */
  ListNode *partition(ListNode *head, int x) {
    // write your code here
    if(head==NULL||head->next==NULL) return head;
    ListNode* pre=head,*p=pre->next;
    while(p!=NULL){
      if(p->val>=x) break;
      pre=pre->next;
      p=p->next;
    }
    if(p==NULL) return head;
    if(head->val>=x) p=head;
    ListNode* pre1=p,*q=pre1->next;
    if(p==head){
      while(q!=NULL){
	if(q->val<x) {
	  ListNode* tmp=q;
	  q=q->next;
	  pre1->next=q;
	  tmp->next=p;pre=tmp;head=tmp;break;
	}
	else{
	  pre1=pre1->next;
	  q=q->next;
	}
      }
    }
    while(q!=NULL){
      if(q->val<x) {
	ListNode* tmp=q;
	q=q->next;
	pre1->next=q;
	pre->next=tmp; tmp->next=p;pre=pre->next;
      }
      else{
	pre1=pre1->next;
	q=q->next;
      }
           
    }
    return head;
  }
};


