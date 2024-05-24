int countPairs(int* nums, int numsSize, int target){
    int i = 0;
    int counter = 0;

    while (i < numsSize - 1)
    {
        int j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] < target)
                counter++;
            j++;
        }
        i++;
    }
    return (counter);
}
