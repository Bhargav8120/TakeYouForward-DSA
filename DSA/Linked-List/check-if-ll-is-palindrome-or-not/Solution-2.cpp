/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:

    ListNode* reverseList(ListNode* head){
        ListNode* temp=head;

        ListNode* prev=NULL;

        ListNode* front=temp;

        while(temp!=NULL){
            front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return true;
        }

        ListNode* slow=head;

        ListNode* fast=head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }

        ListNode* newNode=reverseList(slow->next);

        ListNode* originalList=head;

        ListNode* rotatedList=newNode;

        while(rotatedList!=NULL){
            if(originalList->val != rotatedList->val){
                // reverseList(newNode);
                return false;
            }
            rotatedList=rotatedList->next;
            originalList=originalList->next;
            
        }
        // reverseList(newNode);

        return true;
    }
};