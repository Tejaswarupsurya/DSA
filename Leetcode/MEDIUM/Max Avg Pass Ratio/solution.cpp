class Solution {
public:
    double Gain(int pass,int total){
        return ((double)(pass+1)/(total+1))-((double)pass/total);
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<tuple<double,int,int>> maxheap;
        for(auto c :classes){
            int pass=c[0],total=c[1];
            double gain =Gain(pass,total);
            maxheap.push({gain,pass,total});
        }
        for(int i=1;i<=extraStudents;i++){
            auto[gain,pass,total]= maxheap.top();
            maxheap.pop();
            pass++;
            total++;
            gain=Gain(pass,total);
            maxheap.push({gain,pass,total});
        }
       double avg=0;
       while(!maxheap.empty()){
        auto[gain,pass,total]=maxheap.top();
        maxheap.pop();
        avg+=(double)pass/total;
       }
       return avg/classes.size();

    }
};
