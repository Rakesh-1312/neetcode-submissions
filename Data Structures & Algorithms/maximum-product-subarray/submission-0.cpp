class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curmin=nums[0];
        int curmax=nums[0];
        int mp=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max({nums[i],curmax*nums[i],curmin*nums[i]});
            curmin=min({nums[i],curmax*nums[i],curmin*nums[i]});
            curmax=temp;
        mp=max(mp,curmax);
        }
        return mp;
    }
};
