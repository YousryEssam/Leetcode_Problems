class Solution {
public:
	bool hasCycle(ListNode* head) {
		map<ListNode*, bool> mp;
		while (head != NULL && head->next != NULL )
		{
			if (mp[head] ) return true;
			mp[head] = true;
			head = head->next;
		}
		return false;
	}
};
