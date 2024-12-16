class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        std::priority_queue<std::pair<int,int>, std::vector<pair<int,int>>,std::greater<std::pair<int,int>>> minheap;
        for(int i=0;i<nums.size();i++){
            minheap.push({nums[i],i});
        }
        while(k--){
            auto[x,i]= minheap.top();
            minheap.pop();
            minheap.push({x*multiplier,i});
        }
        vector<int> store(nums.size(),0);
        while(!minheap.empty()){
            auto[x,i]=minheap.top();
            minheap.pop();
            store[i]=x;
        }
     return store;
    }
};
