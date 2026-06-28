class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()-1 == 0) return true;
        int i = 0;
        for (char c : s) {
            if (isalnum(c)) {
                s[i] = c;
                i++;
            }
        }

        s.resize(i);

         transform(s.begin(), s.end(), s.begin(), ::tolower);

        int start = 0, end = s.size()-1;
        bool isvalid = true;

        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }

        return isvalid;
        
    }
};