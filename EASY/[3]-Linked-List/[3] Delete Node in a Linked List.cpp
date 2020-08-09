struct ListNode  // Singly Linked List Definition
{
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };


class Solution 
{
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }
    inline void deleteNode(ListNode* node) 
    {
        *node=*(node->next);   // Pointing the current node ptr to next node pointer which will skip the node data ( which was requested to be deleted ).
    }
};
