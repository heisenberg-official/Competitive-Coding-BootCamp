class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if(head->next==NULL)
            
        int length = 0;
        
        ListNode* temp = head;
        ListNode* temp0 = head;
        
        while (temp != NULL)
        {
            length++;
            temp=temp->next;
        }
        
        length-=n;
        
        while (length>1)
        {
            length--;  
            temp0=temp0->next;
        }
        temp0->next=temp0->next->next;
        return head;
    }
};
