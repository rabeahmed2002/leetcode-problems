var kidsWithCandies = function(candies, extraCandies) {
    const result = new Array(candies.length) 
    let max = candies[0];
    for (var i = 1; i < candies.length; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }

    for (var i = 0; i < candies.length; i++) {
        if (candies[i] + extraCandies >= max) {
            result[i] = true;
        } else {
            result[i] = false;
        }
    }
    return result;
};