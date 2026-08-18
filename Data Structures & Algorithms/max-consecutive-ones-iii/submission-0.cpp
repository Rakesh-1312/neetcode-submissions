class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0;
        int r=0;
        int l=0;
        int count=0;
        int len=0;
        while(r<nums.size()){
            if(nums[r]==0){
                count++;
            }
            while(count>k){
                if(nums[l]==0){
                    count--;
                }
                l++;
            }
            if(count<=k){
                len=r-l+1;
                maxlen=max(maxlen,len);
                r++;
            }
        }
        return maxlen;
    }
};