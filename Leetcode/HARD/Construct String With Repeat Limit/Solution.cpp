class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        sort(s.rbegin(),s.rend());
        int count=1;
        int j=0;
        int i=0;
        string ans;
        for(i=0;s[i]!='\0';i++){
            if(s[i]==s[j]){
                if(count>repeatLimit){
                   int k=i+1;
                  while(k<s.size()&&s[k]==s[i]){
                    k++;
                  }
                if(s[k]=='\0'){continue;}
                else{
                swap(s[i],s[k]);
                ans.push_back(s[i]);
                  j=i;
                  count=2; 
                }
                }else{
                ans.push_back(s[i]);
                count++;
                }       
            }
            else{
                if(count>repeatLimit){
                    ans.push_back(s[i]);
                    count=2;
                    j=i;     
                }else{
                ans.push_back(s[i]);
                count=2;
                j=i;
                }
              }
        }
    return ans;
    }
};
