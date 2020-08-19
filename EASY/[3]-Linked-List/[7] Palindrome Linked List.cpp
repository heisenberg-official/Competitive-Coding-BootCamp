class Solution 
{
public:
    Solution()
    {
      std::ios_base::sync_with_stdio(false);
      std::cin.tie(0);
    }
    
    bool isPalindrome(ListNode* head) 
    {
        return recursion(head, head);
    }
    
    bool recursion(ListNode*& front, ListNode* back) 
    {
        if(back == NULL) return true;
        
        bool isPal = (recursion(front, back->next) & back->val == front->val);
        
        front = front->next;
        return isPal;
    }
};
