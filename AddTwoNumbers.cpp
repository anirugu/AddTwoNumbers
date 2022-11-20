// AddTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

#include <iostream>

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

	int carry = 0;
	ListNode* l3 = NULL;
	ListNode* next = l3;
	while (l1 != nullptr || l2 != nullptr) {
		int value = carry;
		if (l1 != nullptr) {
			value += l1->val;
		}
		if (l2 != nullptr)
		{
			value += l2->val;
		}
		if (value >= 10) {
			carry = 1;
			value = value - 10;
		}
		else {
			carry = 0;
		}
		if (next == nullptr) {
			next = new ListNode(value);
		}
		else {
			next->next = new ListNode(value);
			next->next = next->next->next;
		}
		l1 = l1->next;
		l2 = l2->next;
	}
	return l3;
}

int main()
{
	ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
	ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
	addTwoNumbers(l1, l2);
}