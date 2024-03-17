#include <stdlib.h>
#include <stdbool.h>

// Function to find the greatest number of candies among all kids
int findMax(int* candies, int candiesSize) {
    int max = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }
    return max;
}

// Function to check if each kid can have the greatest number of candies
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int maxCandies = findMax(candies, candiesSize);
    bool* result = (bool*)malloc(sizeof(bool) * candiesSize);
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }
    
    for (int i = 0; i < candiesSize; i++) {
        if (candies[i] + extraCandies >= maxCandies) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    
    *returnSize = candiesSize;
    return result;
}
