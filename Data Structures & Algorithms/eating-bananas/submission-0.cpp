class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=piles[0];
        for(int i=0;i<piles.size();i++){
            if(piles[i]>r){
                r=piles[i];
            }
        }
        int ans=0;
        while(l<=r){
          int m=l+((r-l)/2);
          int c=0;
          for(int i=0;i<piles.size();i++){
                c=c+ceil(double(piles[i])/double(m));
          }
          if(c<=h){
            ans=m;
            r=m-1;
          }
          else{
            l=m+1;
          }
        }
        return ans;
    }
};
