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
     * @param n: An integer.
     * @return: The head of linked list.
     */
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        // write your code here
        
        if(head==NULL||n<=0) return head;
        
        ListNode* p=head,*q=head;
        while(n!=0&&p!=NULL){
        	n--;
        	p=p->next;
        }
        
        if(n>0)  return head;
        else if(n==0&&p==NULL) {
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
            return head;
        }
        else{ 
            while(p->next!=NULL){
                p=p->next;
                q=q->next;
            }
            ListNode* tmp = q->next->next;
            delete q->next;
            q->next=tmp;
            return head;
        }
        
        
    }
};

