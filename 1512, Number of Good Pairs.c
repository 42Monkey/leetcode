int numIdenticalPairs(int* nums, int numsSize) {
    int i = 0;
    int pair = 0;

    while (i < numsSize) {
        int j = i + 1;
        while (j < numsSize) {
            if (nums[i] == nums[j])
                pair++;
            j++;
        }
        i++;
    }
    return (pair);
}
