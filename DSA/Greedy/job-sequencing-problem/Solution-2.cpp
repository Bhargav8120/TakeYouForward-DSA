class Solution{  
  public:

    bool static compare(const vector<int> &a , const vector<int> &b){
        return a[2]>b[2];
    }

    vector<int> JobScheduling(vector<vector<int>>& Jobs) { 
        //your code goes here
        sort(Jobs.begin(),Jobs.end(),compare);

        int maxDealine=-1;

        int n=Jobs.size();

        int count=0;

        int totalProfit=0;

        for(auto it:Jobs){
            maxDealine=max(maxDealine,it[1]);
        }

        vector<int> hash(maxDealine,-1);

        for(int i=0;i<n;i++){

            for(int j= Jobs[i][1] - 1 ; j>=0;j--){
                if(hash[j]==-1){
                    count++;
                    hash[j]=Jobs[i][0];
                    totalProfit+=Jobs[i][2];

                    break;
                }
            }
        }

        return{count , totalProfit};
    } 
};