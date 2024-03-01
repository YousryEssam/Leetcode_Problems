class Solution {
public:
	string maximumOddBinaryNumber(string s) {
		sort(s.begin(), s.end());// to make all ones in the back
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '1') { 
				// to make sure than the number is odd one.
				swap(s[i], s[0]);
				break;
			}
		}
		reverse(s.begin(), s.end()); // to make the number max as possable.
		return s;
	}
};
