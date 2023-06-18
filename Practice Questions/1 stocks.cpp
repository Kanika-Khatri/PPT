//121. Best Time to Buy and Sell Stock (leetcode)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
       int minimum= INT_MAX;
       int  profit =0;
         if (prices.size()==0)
            return 0;
        
       for (int i=0;i<prices.size(); i++)
       {
            if(prices[i]< minimum)
                minimum = prices[i];
          
          else if (prices[i]- minimum > profit)
               profit =prices[i]- minimum;
       }
        return profit;
    }
};

/* if (prices.size()==0)
            return 0;
        for(int i =1; i<prices.size();i++)
        {
            profit= max(profit, prices[i]- minimum);
            minimum= min(minimum, prices[i]);
        }
        return profit;
        */
