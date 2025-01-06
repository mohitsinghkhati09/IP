class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans = false;
        int n= nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;

        }

        for(auto it:m){
            if(it.second > 1){
                ans = true;
                break;
            }
        }

        return ans;

    }
};
