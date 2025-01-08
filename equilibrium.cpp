//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int equilibriumPoint(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>left(arr.begin(),arr.end());
        vector<int>right(arr.begin(),arr.end());
        
        for(int i=1;i<n;i++){
            left[i] = left[i]+ left[i-1];
        }
        
        
        for(int i = n-2;i>=0;i--){
            right[i] = right[i] + right[i+1];
        }
        
        
        for(int i = 0;i<n;i++){
            if(left[i] == right[i]){
                return i+1;
            }
        }
        
        return -1;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.equilibriumPoint(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends
