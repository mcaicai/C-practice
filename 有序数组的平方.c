int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int right = numsSize - 1;
    int left = 0;
    *returnSize = numsSize;
    int index;
    int* ans = (int*)malloc(sizeof(int) * numsSize);
    for (index = numsSize - 1; index >= 0; index--) {
        int lSquare = nums[left] * nums[left];
        int rSquare = nums[right] * nums[right];
        if (lSquare > rSquare) {
            ans[index] = lSquare;
            left++;
        }
        else {
            ans[index] = rSquare;
            right--;
        }
    }
    return ans;
}