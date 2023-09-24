function createCounter(n) {
    let count = n; // Initialize count to n

    // Define the counter function
    function counter() {
        return count++; // Increment count and return its previous value
    }

    return counter; // Return the counter function
}

// Example usage:
const myCounter = createCounter(5);

console.log(myCounter()); // Output: 5
console.log(myCounter()); // Output: 6
console.log(myCounter()); // Output: 7
// Each time you call myCounter, it returns the current value of count and increments count.
