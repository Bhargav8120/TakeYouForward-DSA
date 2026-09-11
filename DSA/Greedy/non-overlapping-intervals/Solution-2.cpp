class Solution {
public:
    static bool comparator(const vector<int> &a , const vector<int> &b){
        return a[1]<b[1];
    }
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        //your code goes here
        sort(Intervals.begin(),Intervals.end(),comparator);

        int n=Intervals.size();

        int countIntervals=1;
        int last=Intervals[0][1];

        for(int i=1;i<n;i++){
            if(Intervals[i][0]>=last){
                countIntervals++;
                last=Intervals[i][1];
            }
           
        }

        return n-countIntervals;
    }
};