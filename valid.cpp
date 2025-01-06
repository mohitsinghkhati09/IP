class Solution {
public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }

        vector<char>str;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'|| s[i]>='0' && s[i]<='9'){
                str.push_back(s[i]);
            }
        }

        int n = str.size();
        int i = 0 , j = n-1;
        bool ans = true;
        while(i<j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }

        return true;
    }
};
