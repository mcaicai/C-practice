int minSubArrayLen(int target, int* nums, int numsSize) {

    int minlenth = numsSize;
    int result1, result;
    int sum = 0;
    int left = 0, right = 0;
    for (; right < numsSize; right++)
    {
        sum = sum + nums[right];
        while (sum >= target)
        {
            int sublength = right - left + 1;
            minlenth = sublength > minlenth ? minlenth : sublength;
            result1 = sum;
            sum = sum - nums[left];
            left++;
        }
    }
    result = minlenth;
    if (minlenth == numsSize)
    {
        result = 0;
    }
    if (minlenth == numsSize && target <= result1)
    {
        result = minlenth;
    }
    return result;
}