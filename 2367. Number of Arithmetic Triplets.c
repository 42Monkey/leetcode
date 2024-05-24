int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int i = 0;
    int counter = 0;

    while(i < numsSize - 2)
    {
        int j = i + 1;
        while (j < numsSize - 1)
        {
            int k = j + 1;
            while (k < numsSize)
            {
                if ((nums[j] - nums[i]) == diff && (nums[k] - nums[j]) == diff)
                    counter++;
                k++;
            }
            j++;
        }
        i++;
    }
    return (counter);
}
