int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    int counter = 0;

    while (i < numsSize)
    {
        if (nums[i] == 1)
        {
            j++;
        }
        else
        {
            j = 0;
        }
        if (j > counter)
        {
            counter = j;
        }
        i++;
    }
    return (counter);
}
