class Solution{
    public:
    static bool comparator(const pair<int,int> &a , const pair<int,int> &b){
        return a.second<b.second;
    }

    int maxMeetings(vector<int>& start, vector<int>& end){
        //your code goes here
        vector<pair<int,int>> meeting;

        for(int i=0;i<start.size();i++){
            meeting.push_back({start[i],end[i]});
        }

        sort(meeting.begin(),meeting.end(),comparator);

        int countMeeting=1;
        int last=meeting[0].second;

        for(int i=1;i<meeting.size();i++){
            if(meeting[i].first>last){
                countMeeting++;
                last=meeting[i].second;
            }
        }

        return countMeeting;
    }
};