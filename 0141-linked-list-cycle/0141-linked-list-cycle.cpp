/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {

        set <ListNode*> st;
        ListNode* temp= head;
        while(temp!= NULL){

            if(st.find(temp)!=st.end())
                return true;
            st.insert(temp);
            temp= temp->next;
        }
        return false;



        // ListNode* slow = head;
        // ListNode* fast = head;

        // while (fast != NULL && fast->next != NULL) {
        //     slow = slow->next;
        //     fast = fast->next->next;
        //     if (fast == slow)
        //         return true;
        // }
        // return false; // give what to return if while condition becomes false
    }
};