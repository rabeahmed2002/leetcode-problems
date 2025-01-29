class Solution {
    public int maxProfit(int[] prices) {
        int buyingDay = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.length; i++) {
            if (prices[i] < buyingDay) {
                buyingDay = prices[i];
            } else if (prices[i] - buyingDay > maxProfit) {
                maxProfit = prices[i] - buyingDay;
            }
        }
        return maxProfit;
    }
}
