class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int>m;
        int l=0,r=0;
        while(l<s.size()){
            m[s[l]]++;
            l++;
        }
        while(r<t.size()){
            m[t[r]]--;
            r++;
        }
        for(auto it:m){
            if(it.second!=0){
                return false;
            }
        }
        return true;
    }
};
