class Solution {
  public:
    long long solve(vector<int>& bt) {
        //your code goes here
        sort(bt.begin(),bt.end());

        int n=bt.size();

        long long sum=0;
        long long TotalSum=0;

        for(int i=0;i<n-1;i++){
            sum+=bt[i];
            TotalSum+=sum;
        }

        int avg=TotalSum/n;

        return avg;

    }
};

