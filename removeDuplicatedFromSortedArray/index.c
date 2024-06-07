int removeDuplicates(int* nums, int numsSize) {

    int count=0;

    for(int i=1; i < numsSize; i++){

        if(nums[i] != nums[count]) {

            count++;
            nums[count]=nums[i];

        } else {
            continue;
        }
    }
    return (count+1);
}