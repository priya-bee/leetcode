class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int uniqueLength = 0;
        int maxLength = 0;
        std::map<char, int> charAndPos;
        int iter = 0;
        while (iter < s.length())
        {
            if (charAndPos.find(s[iter]) == charAndPos.end())
            {
                charAndPos[s[iter]] = iter;
                uniqueLength++;
                iter++;
            }
            else
            {
                iter = charAndPos[s[iter]]+1;
                charAndPos.clear();
                maxLength = (uniqueLength > maxLength) ? uniqueLength : maxLength;
                uniqueLength = 0;
            }
        }
        
        return (uniqueLength > maxLength) ? uniqueLength : maxLength;
    }
};
