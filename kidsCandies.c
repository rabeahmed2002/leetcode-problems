#include <stdio.h>
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

int main() {
    int candies[] = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    int returnSize;
    
    bool* result = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);
    
    if (result != NULL) {
        printf("[");
        for (int i = 0; i < returnSize; i++) {
            printf("%s", result[i] ? "true" : "false");
            if (i != returnSize - 1) {
                printf(",");
            }
        }
        printf("]\n");
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}
