#include <stdio.h>

int main() {
    
    int prices[]={5,6,7,8,3,4,2,13, 15};
    int pricesSize=sizeof(prices)/sizeof(prices[0]);
    
    int minPrice=prices[0];
    int maxProfit=0;
    
    int minIndex;

    for(int i=0; i<pricesSize; i++) {
        if (minPrice > prices[i]) {
            minPrice=prices[i];
            minIndex=i;
        }
    }

    int max;
    
    for(int j=minIndex+1; j < pricesSize; j++) {
        int max=prices[j-1];
        
        if(j < pricesSize) {
            int profit = prices[j] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
        else {
            maxProfit = 0;
            break;
        }
        
    }
    
    printf("Price when bought: %d\n", minPrice);
    printf("Price when sold: %d\n", maxProfit);
    

    return 0;
}