/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i,j;
    *returnSize = 2;
    int *indices = (int*)malloc(*(returnSize) * sizeof(int));

    for(i=0;i<numsSize;i++)
    {
       for(j=i+1;j<numsSize;j++)
       {
           if((nums[i]+nums[j]) == target)
           {
               indices[0] = i;
               indices[1] = j;
           }
       }
    }
    return indices;
}