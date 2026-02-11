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
    ListNode* middleNode(ListNode* head) {

        ListNode* fast = head;
        ListNode* slow = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* newTail = head->next;
        ListNode* newHead = reverseList(head->next);

        newTail->next = head;
        head->next = NULL;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {

        if (head == NULL || head->next == NULL)// ||->ya
            return head;

        ListNode* mid = middleNode(head);
        ListNode* newHead = reverseList(mid);

        ListNode* p1 = head;
        ListNode* p2 = newHead;

        while (p1 != NULL && p2 != NULL) {
            if (p1->val != p2->val)
                return false;

            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};