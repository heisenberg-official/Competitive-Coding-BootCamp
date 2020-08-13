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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *current=head,*next=NULL,*prev=NULL;
        
        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        
        return prev;
    }
};
