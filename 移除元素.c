int removeElement(int* nums, int numsSize, int val) {
    int i;
    int length = numsSize;
    for (i = 0; i < length; i++)
    {
        if (nums[i] == val)
        {
            nums[i] = nums[length - 1];
            length--;
            i--;
        }
    }
    return length;
}