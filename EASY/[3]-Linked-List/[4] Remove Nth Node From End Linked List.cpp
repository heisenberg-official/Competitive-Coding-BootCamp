#include<iostream>

struct ListNode 
{
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution 
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(0);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if(head == NULL)
            return NULL;
        
        int len = 0;
        
        ListNode* cur = head, * prev = NULL;
        
        while(cur != NULL)
        {
            len++;
            cur = cur->next;
        }
        
        if(len == n)
        {
            return head->next;
        }
        
        cur = head;
        
        len -= n;
        
        while(len--)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        
        return head;
    }
};
