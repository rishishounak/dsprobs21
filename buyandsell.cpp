class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minelem=prices[0];
        
        int temprofit;
        int buy1;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minelem){
                minelem=prices[i];
            }
            if(prices[i]-minelem>maxprofit){
                maxprofit=prices[i]-minelem;
            }


        }

        return maxprofit;
    }
};
