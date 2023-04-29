//https://leetcode.com/problems/middle-of-the-linked-list/

#include <iostream>

 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int length = 0;
        int temp_length = 0;
        int mid = 0;
        ListNode* myNext = head;

        while(myNext != nullptr)
        {
            length++;
            myNext = myNext->next;
        }

        mid = (length / 2) + 1;
        myNext = head;

        while (myNext != nullptr)
        {
            temp_length++;
            myNext = myNext->next;
            if(temp_length == (mid - 1))
            {
                break;
            }
            
        }

        return myNext;
    }
};

