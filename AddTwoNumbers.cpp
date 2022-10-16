// AddTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

#include <iostream>

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

int main()
{
    std::cout << "Hello World!\n";
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    ListNode* l = l1;
    ListNode* r = l2;
    
    while (l != NULL && r != NULL) {

    }
}
