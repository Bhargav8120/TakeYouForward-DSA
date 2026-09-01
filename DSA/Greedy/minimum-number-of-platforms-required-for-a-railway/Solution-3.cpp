class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
        //your code goes here
        sort(Arrival.begin(),Arrival.end());

        sort(Departure.begin(),Departure.end());

        int i=0;
        int j=0;

        int count=0;
        int maxiPlatform=0;

        while(i<Arrival.size() && j<Departure.size()){
            if(Arrival[i]<=Departure[j]){
                count++;
                i++;
            }
            else{
                count--;
                j++;
            }

            maxiPlatform=max(maxiPlatform,count);
        }

        return maxiPlatform;
    }
};