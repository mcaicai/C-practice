int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i=0,j=0,k=0,h=0,b=0;
    int* p = (int *) malloc ( sizeof(int) * 2 ); 
    int a[2];
    i=numsSize;
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(nums[j]+nums[k]==target)
            {
               
              p[0]=j;
              p[1]=k;
              *returnSize=2;
              return p;
              
            }
        }
    }
    *returnSize=0;
    return NULL;
    
}

//hash表
struct hashTable {
    int key;
    int val;
    UT_hash_handle hh;
};

struct hashTable* hashtable;

struct hashTable* find(int ikey) {
    struct hashTable* tmp;
    HASH_FIND_INT(hashtable, &ikey, tmp);
    return tmp;
}

void insert(int ikey, int ival) {
    struct hashTable* it = find(ikey);
    if (it == NULL) {
        struct hashTable* tmp = malloc(sizeof(struct hashTable));
        tmp->key = ikey, tmp->val = ival;
        HASH_ADD_INT(hashtable, key, tmp);
    } else {
        it->val = ival;
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    hashtable = NULL;
    for (int i = 0; i < numsSize; i++) {
        struct hashTable* it = find(target - nums[i]);
        if (it != NULL) {
            int* ret = malloc(sizeof(int) * 2);
            ret[0] = it->val, ret[1] = i;
            *returnSize = 2;
            return ret;
        }
        insert(nums[i], i);
    }
    *returnSize = 0;
    return NULL;
}

// 作者：LeetCode-Solution
// 链接：https://leetcode.cn/problems/two-sum/solution/liang-shu-zhi-he-by-leetcode-solution/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。