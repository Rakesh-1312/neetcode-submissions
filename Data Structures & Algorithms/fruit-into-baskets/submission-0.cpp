class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen=0;
        for(int i=0;i<fruits.size();i++){
            set<int>s;
            for(int j=i;j<fruits.size();j++){
                s.insert(fruits[j]);
                if(s.size()<=2){
                    maxlen=max(maxlen,j-i+1);
                }
                else{
                    break;
                }

            }
        }
        return maxlen;
    }
};