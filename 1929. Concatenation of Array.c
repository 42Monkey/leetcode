int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int i = 0;
    int n = numsSize * 2;

    *returnSize = n;
    int *ans = (int *)malloc(sizeof(int) * n);

    while (i < numsSize)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
        i++;
    }
    return (ans);
}
