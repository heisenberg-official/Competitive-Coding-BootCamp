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
    ListNode* mergeTwoLists(ListNode* x1, ListNode* x2) 
    {
        if(!x1)
            return x2;
        if(!x2)
            return x1;
        ListNode* head = x1->val <= x2->val ? x1 : x2;
        head->next = x1->val <= x2->val ? mergeTwoLists(x1->next,x2) : mergeTwoLists(x1,x2->next); //Using Recursion
        return head;
    }
};
