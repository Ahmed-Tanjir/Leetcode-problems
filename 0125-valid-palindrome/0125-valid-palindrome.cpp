class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()-1 == 0) return true;

        int i = 0;
        for (char c : s) {
            if (isalnum(c)) {
                tolower(c);
                s[i] = tolower(c);
                i++;
            }
        }

        s.resize(i);
        
        int start = 0, end = s.size()-1;
        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;  
    }
};