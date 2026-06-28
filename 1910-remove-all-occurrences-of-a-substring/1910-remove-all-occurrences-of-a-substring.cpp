class Solution {
public:
    string removeOccurrences(string s, string part) {
        int sizep = part.size();
        int start = s.find(part);

        while(s.size()>0 && start<s.size()){
            s.erase(start,sizep);
            start = s.find(part);         
        }
        return s;
    }
};