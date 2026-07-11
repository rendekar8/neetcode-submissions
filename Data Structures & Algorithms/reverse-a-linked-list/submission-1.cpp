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

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }
        int last = head->val;
        ListNode* revHead = new ListNode(last);
        // ListNode* revIter = revHead;
        head = head->next;
        while(head != nullptr) {
            int curVal = head->val;
            ListNode* newNode = new ListNode(curVal, revHead);
            revHead = newNode;
            ListNode* toBeDeleted = head;
            head = head->next;
            delete toBeDeleted;
        }
        return revHead;

    }
};
