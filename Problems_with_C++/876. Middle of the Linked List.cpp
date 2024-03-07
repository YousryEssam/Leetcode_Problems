class Solution {
public:
	ListNode* middleNode(ListNode* head) {
		ListNode* copyHead = head;
		int cnt = 0, idx = 0;
		while (copyHead != NULL)
		{
			cnt++;
			copyHead = copyHead->next;
		}
		while (idx < cnt / 2)
		{
            idx ++;
			head = head->next;

		}
		return head;
	}
};
