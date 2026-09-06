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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> a;
        vector<ListNode*> b;
        ListNode *ha=headA;
        ListNode *hb=headB;
        while(headA!=NULL || headB != NULL){
            if(headA != NULL){
                a.push_back(headA);
                headA=headA->next;
            }
            if(headB != NULL){
                b.push_back(headB);
                headB=headB->next;
            }
        }
        int i=0;
        while(i<a.size() &&  i<b.size() && a[a.size()-1-i]==b[b.size()-1-i]){
            i++;
        }
        if(i==a.size())return ha;
        if(i==b.size())return hb;
        if(i==0)return NULL;
        return a[a.size()-i];
    }
};