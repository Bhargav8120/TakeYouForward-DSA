class Solution{
    public:

    static bool comp(const pair<int,int> &a , const pair<int,int> &b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    }

    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
        //your code goes here
        vector<pair<int,int>> intermediate;

        for(int i=0;i<Arrival.size();i++){
            intermediate.push_back({Arrival[i],1});
        }

        for(int i=0;i<Departure.size();i++){
            intermediate.push_back({Departure[i],0});
        }

        sort(intermediate.begin(),intermediate.end(),comp);

        int count=0;

        int maxiPlatform=0;

        for(int i=0;i<intermediate.size();i++){

            if(intermediate[i].second==1){
                count++;
            }
            else{
                count--;
            }

            maxiPlatform=max(maxiPlatform,count);
        }
        return maxiPlatform;
    }
};