class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> hashmap;
        int result = 0;
        int left = 0;

        for(int right = 0; right < s.length(); right++)
        {
            char currentchar = s.at(right);

            if(hashmap.count(currentchar) && 
            hashmap.at(currentchar) >= left)
            {
                left = hashmap.at(currentchar) + 1;
            }

            result = max(result, right - left + 1);
            hashmap[currentchar] = right;
        }

        return result;
    }
};