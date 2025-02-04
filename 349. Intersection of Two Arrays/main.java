class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        ArrayList<Integer> result = new ArrayList<>();
        Arrays.sort(nums1);
        Arrays.sort(nums2);

        for (int i = 0; i < nums1.length; i++) {
            for (int j = 0; j < nums2.length; j++) {
                if (i > 0 && nums1[i] == nums1[i - 1]) {
                    continue;
                }
                if (nums1[i] == nums2[j]) {
                    result.add(nums1[i]);
                    break;
                }
            }
        }
        int[] intersection = new int[result.size()];
        for (int i = 0; i < result.size(); i++) {
            intersection[i] = result.get(i);
        }

        return intersection;
    }
}