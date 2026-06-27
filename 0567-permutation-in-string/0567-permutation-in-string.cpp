class Solution {
public:
    bool isfreqsame(int freq[], int winfreq[]){
        for(int i=0; i<26; i++){
            if(freq[i] != winfreq[i]) return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
       int freq[26] = {0};

       for(int i=0; i<=s1.size()-1; i++){
            freq[s1[i] - 'a']++;
       }

       int windowSize = s1.size();

       for(int i=0; i<=s2.size()-1; i++){
            int windowidx = 0;
            int idx = i;
            int winfreq[26] = {0};

            while(windowidx < windowSize && idx < s2.size()){
                winfreq[s2[idx] - 'a']++;
                windowidx++;
                idx++;
            }
            if(isfreqsame(freq,winfreq)){
                return true;
            }

       }

       return false;
        
    }
};