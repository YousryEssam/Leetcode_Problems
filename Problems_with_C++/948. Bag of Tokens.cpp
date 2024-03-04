class Solution {
public:
#define sz(x) (int)x.size() 
#define all(x) x.begin(), x.end()
	int bagOfTokensScore(vector<int>& tokens, int power) {

		sort(all(tokens));
		int ans = 0, mxAns = 0;
		int st = 0, ed = sz(tokens) - 1;
		while (st <= ed)
		{
			if (tokens[st] <= power) {
				power -= tokens[st];
				ans++;
				st++;
			}
			else if (ans > 0) {
				power += tokens[ed];
				ans--;
				ed--;
			}
			else ed--;
			mxAns = max(ans, mxAns);
		}
		return mxAns;
	}
};
