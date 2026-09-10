class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int j=0;
        int p=0;
        int mp=0;
        for(int i=1;i<nums.size();i++){
            p=nums[i]-nums[j];
             if(p<=0){
                j=i;
            }
             mp=max(mp,p);
        }
           
            
        return mp;
    }
};
