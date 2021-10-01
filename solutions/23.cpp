#include <bits/stdc++.h>
using namespace std

//Method 1

class Solution {
public:
    ListNode* merge(ListNode* a, ListNode* b){
        if(a == nullptr)
            return b;
        if(b == nullptr)
            return a;
        ListNode* c;
        if(a->val < b->val){
            c = a;
            c->next = merge(a->next, b);
        }
        else{
            c = b;
            c->next = merge(a,b->next);
        }
        return c;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
            return nullptr;
        
        for(int i=1;i<lists.size();i++){
            lists[0] = merge(lists[0],lists[i]);
        }
        return lists[0];
    }
};
//Method 2

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<lists.size();i++){
            while(lists[i]){
                pq.push(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        ListNode* head = nullptr;
        ListNode* curr = nullptr;
        
        while(!pq.empty()){
            ListNode* temp = new ListNode(pq.top());
            if(!curr){
                curr = temp;
                head = curr;
            }
            else{
                curr->next = temp;
                curr = curr->next;
            }
            pq.pop();
        }
        return head;
    }
};