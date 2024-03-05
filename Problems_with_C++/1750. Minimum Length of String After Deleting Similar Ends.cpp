class Solution {
public:
	int minimumLength(string s) {
		int st = 0, ed = s.size() - 1; 
		while (st < ed)
		{
			if (s[st] != s[ed] ) break;
			else
			{
				char c = s[st];
				while (s[st] == c && st <= ed)
				{
					st++;
				}
				while (s[ed] == c  && ed >= st)
				{
					ed--;
				}
			}
		}
		return (ed - st + 1);
	}
};
