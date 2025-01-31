class Solution {
    public int sum(int[] arr) {
        int total=0;
        for(int i=0; i < arr.length; i++) {
            total=total+arr[i];
        }
        return total;
    }
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int startingLocation=0;
        int total=0;
        if(sum(gas) < sum(cost)) {
            return -1;
        } 

        for(int i=0; i < gas.length; i++) {
            total = total + (gas[i] - cost[i]);
            if(total < 0) {
                total=0;
                startingLocation=i+1;
            }
        }
        return startingLocation;
    }
}