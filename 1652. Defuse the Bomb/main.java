class Solution {
    public int[] decrypt(int[] code, int k) {
        int n = code.length; 
        int[] result = new int[n]; 

        int windowSum = 0;

        int start, end;

        if (k > 0) {
            start = 1;
            end = k;
        } else {
            // For k < 0, sum the previous k elements
            start = n + k; // Equivalent to n - |k|
            end = n - 1;
        }

        for (int i = start; i <= end; i++) {
            windowSum += code[i % n]; // Use modulo to handle circular array
        }

        for (int i = 0; i < n; i++) {
            result[i] = windowSum; // Store the current window sum in the result

            // Slide the window:
            // Subtract the element that is leaving the window
            windowSum -= code[(start + i) % n];
            // Add the new element that is entering the window
            windowSum += code[(end + i + 1) % n];
        }

        return result;
    }
}
