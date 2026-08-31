class Solution{
    public:

    static bool comp(const pair<int,int> &a , const pair<int,int> &b){
        return b.second>a.second;
    }
    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here

        int n=start.size();

        vector<pair<int,int>> meetings;

        for(int i=0;i<n;i++){
            meetings.push_back({start[i],end[i]});
        }

        sort(meetings.begin(),meetings.end(),comp);

        int limit=meetings[0].second;

        int count=1;

        for(int i=1;i<n;i++){
            if(meetings[i].first>limit){
                count++;
                limit=meetings[i].second;
            }
        }

        return count;
    }
};