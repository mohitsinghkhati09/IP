class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int,int>mp;
        for(int i =0;i<n;i++){
            mp[nums[i]]++;
        }


        vector<pair<int,int>>v(mp.begin(),mp.end());
         sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int>ans;
        for (auto &pair : v) {
            if (k-- == 0) break; 
            ans.push_back(pair.first);
        }

        return ans;
    }
};
