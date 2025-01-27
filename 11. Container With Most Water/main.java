class Solution {
    public int maxArea(int[] height) {
        int L=0, R=height.length -1;
        int maxArea=0, output=0;
        for(int i = 0; i < height.length; i++) {
            maxArea=(R - L) * Math.min(height[L], height[R]);
            output=Math.max(maxArea, output);
            
            if(height[L] < height[R]) {
                L++;
            } else if (height[L] > height[R]) {
                R--;
            } else {
                R--;
            }
        }
        return output;
    }
}