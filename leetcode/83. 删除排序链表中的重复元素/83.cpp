/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *cur = head;
        while (cur && cur->next)
        {
            ListNode *nxt = cur->next;
            if (cur->val == nxt->val)
            {
                cur->next = cur->next->next;
                delete nxt;
            }
            else
                cur = nxt;
        }
        return head;
    }
};