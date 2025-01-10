class Solution {
public:
     bool checksubset(string word1,vector<int> freq2){
        vector<int> freq1(26,0);
        for(auto ch:word1){freq1[ch-'a']++;}
            for(int i=0;i<26;i++){
            if(freq2[i]>freq1[i]){return false;}
            }
         return true; 
        }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> freq2(26,0);
        vector<string> ans;
        for(int i=0;i<words2.size();i++){
            vector<int> tempfreq(26,0);
            for(auto ch:words2[i]){tempfreq[ch-'a']++;}
            for(int i=0;i<26;i++){
                freq2[i]=max(freq2[i],tempfreq[i]);
            }
        }
        for(int i=0;i<words1.size();i++){
            if(checksubset(words1[i],freq2)){
                ans.push_back(words1[i]);
            }
        }
        return ans;
    }
};
