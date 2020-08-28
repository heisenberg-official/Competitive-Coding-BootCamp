struct ListNode
{
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode* head)
    {
        if (head == NULL || head->next == NULL)
            return false;
            
        ListNode* slow = (ListNode*)malloc(sizeof(ListNode));
        ListNode* fast = (ListNode*)malloc(sizeof(ListNode));
        
        slow = head;
        fast = head->next;

        while (fast != NULL && fast->next != NULL)
        {
            if (slow == fast)
                return true;
                
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
    }
};
