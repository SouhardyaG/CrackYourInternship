int maxProfit(int* prices, int pricesSize){
    int buyprice = prices[0], maxprofit = 0;
    for(int i = 1; i < pricesSize ; i++){
        if(buyprice > prices[i]){
            buyprice = prices[i];
        }
        else if(prices[i] - buyprice > maxprofit){
            maxprofit = prices[i] - buyprice;
        }
    }
    return maxprofit;
}

// 211 / 211 test cases passed.
// Status: Accepted
// Runtime: 137 ms
// Memory Usage: 13.2 MB
