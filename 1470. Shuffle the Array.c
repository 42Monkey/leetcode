int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int i = 0;
    *returnSize = 2 * n;

    int *ans = (int *)malloc(sizeof(int) * (*returnSize));
    if (ans == NULL)
        return (NULL);

    while (i < n)
    {
        ans[2 * i] = nums[i];
        ans[2 * i + 1] = nums[i + n];
        i++;
    }
    return (ans);
}
