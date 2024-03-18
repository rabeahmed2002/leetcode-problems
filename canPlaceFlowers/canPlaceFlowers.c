#include <stdbool.h> // Include this header for the bool type

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {

    if(n==0) {
        return true;
    }

    int count=0;

    for(int i=0; i<flowerbedSize; i++) {

        if(flowerbed[i]==0) {

            if( ( (i==0) || (flowerbed[i-1]==0) ) && ( (i==flowerbedSize-1) || (flowerbed[i+1]==0) ) ){
                flowerbed[i]=1;
                count++;

                if(count>=n){
                    return true;
                }
            }
        }
    }
    return false;
}
