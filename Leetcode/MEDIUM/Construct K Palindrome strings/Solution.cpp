class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k){return false;}
        if(s.length()==k){return true;}
        vector<int> freq(26,0);
        for(auto ch:s){
            freq[ch-'a']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){ cnt++;}
        }
        if(cnt>k){return false;}
        return true;
    }
};
