int* buildArray(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    *returnSize = numsSize;

    int *ans = (int *)malloc(sizeof(int) * numsSize);

    if (ans == NULL)
        return (NULL);

    while (i < numsSize)
    {
        ans[i] = nums[nums[i]];
        i++;
    }
    return(ans);
}
