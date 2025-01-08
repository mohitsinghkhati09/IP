class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>ans;
        int n = arr.size();
        int mx = arr[n-1];
        ans.push_back(mx);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=mx){
                ans.push_back(arr[i]);
                mx = arr[i];
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
