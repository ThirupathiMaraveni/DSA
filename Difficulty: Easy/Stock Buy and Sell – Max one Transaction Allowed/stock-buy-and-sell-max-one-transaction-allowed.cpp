class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        
        
         int minBuy=-1;
                                          int maxSell=-1;
                                          int ans=INT_MIN;
                                          for(int i=0;i<prices.size();i++){
                                              if(minBuy==-1||prices[i]<minBuy){
                                                  minBuy=prices[i];
                                                  maxSell=prices[i];
                                              }
                                              else{
                                                  maxSell=max(maxSell, prices[i]);
                                              }
                                              ans=max(ans, maxSell-minBuy);
                                          }
                                          return ans;
      
    }
};
