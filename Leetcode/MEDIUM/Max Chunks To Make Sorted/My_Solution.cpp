class Solution {
public:
    vector<int> slice(vector<int> arr,int start){
        vector<int> m;
        for(int i=start;i<arr.size();i++){
            m.push_back(arr[i]);
        }
        return m;
    }
    int maxChunksToSorted(vector<int>& arr) {
        int cnt=0;
        int start=0;
        stack<int> st;
        vector<int> order;
        for(int i=0;i<arr.size();i++){
            order.push_back(i);
            st.push(arr[i]);
            vector<int> store;
            while(!st.empty()){
                store.push_back(st.top());
                st.pop();
            }
            vector<int> dammi=store;
            sort(dammi.begin(),dammi.end());
           if(dammi==slice(order,start)){
            cnt++;
            start=i+1;
           }else{
            for(int i=store.size()-1;i>=0;i--){
                st.push(store[i]);
            }
           }
        }
     return cnt>0 ? cnt: 1;
    }
};
