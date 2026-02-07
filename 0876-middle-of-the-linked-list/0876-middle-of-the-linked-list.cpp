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

        //find length of LL
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        //temp again starts from head--NO
        temp= head;
        int mid = cnt/2 + 1;
        while ( 1<mid){
            temp=temp->next;
            mid--;
        }
        return temp;
    }
};
// METHOD 1 it is!!