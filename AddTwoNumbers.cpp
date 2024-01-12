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

 #include <string>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {        
        ListNode* head = nullptr;
        string num1,num2;
        
        //make string
        while(l1 != nullptr){
            num1 = num1 + to_string(l1->val);
            l1 = l1 -> next;
        }
        
        while(l2 != nullptr){
            num2 = num2 + to_string(l2->val);
            l2 = l2 -> next;
        }

        //reverse string
        for(int i = 0; i < num1.size()-1; i++){
            
        }

        //add ints
        int sum;
        sum =  stoi(num1) + stoi(num2)






        
/*
        while ((l1 != nullptr) && (l2 != nullptr)){
            ListNode* added = new ListNode(l1 -> val + l2 -> val); //add new node with added value
            ListNode* temp = added; // temp var for storing old pointer as pointer to next

            if (head == nullptr){ //first iteration
                head = added;
            } else if (head -> next == nullptr){ //second iteration 
                head -> next = added;
            }
            else{
            head -> next = added;
            added -> next = nullptr;
            }
            //move pointers
            l1 = l1 -> next;
            l2 = l2 -> next; 
            //things to fix, need to reverse order, and account for the case that the array is just size of 1
            //for initial solution get the integer solution, then convert to string then reverse it then back to integer for single indices
            //need for loop for(size of integer) - first element = last element -> first[i] = array[(numArr().size()-1)-i]
        }
        return head;
*/
    };
}; 
