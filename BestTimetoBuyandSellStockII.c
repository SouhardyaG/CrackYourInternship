int maxProfit(int* prices, int pricesSize){
    int profit = 0;
    for(int i = 1; i < pricesSize; i++){
        if(prices[i] > prices[i-1]){
            profit += (prices[i]-prices[i-1]);
        }
    }
    return profit;
}

// 200 / 200 test cases passed.
// Status: Accepted
// Runtime: 6 ms
// Memory Usage: 6.8 MB
