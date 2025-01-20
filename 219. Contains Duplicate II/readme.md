we use sliding window technique in this problem. 

first placing 2 pointers, i at 0 and j at i+1

Look for a pair of numbers, say nums[i] and nums[j], such that:

They are the same ( nums[i]==nums[j] ).

The distance between their indices is at most k ( ∣i−j∣ ≤ k).

If you find such a pair, return true. If you go through the whole array and don't find any, return false.