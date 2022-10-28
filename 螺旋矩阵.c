/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes){    
    *returnSize = n;
    *returnColumnSizes = (int*)malloc(sizeof(int) * n);
    int **array=(int **)malloc(sizeof(int *)*n);

    int i;
    for(i=0;i<n;i++)
    {
        array[i]=(int *)malloc(sizeof(int ) *n);
        (*returnColumnSizes)[i] = n;
    }

    int sX = 0;
    int sY = 0;
    int mid = n/2;
    int loop = n/2;
    int offset = 1;
    int count=1;

    while(loop)
    {
        int i = sX;
        int j = sY;
        
        for(;j<sY+n-offset;j++)
        {
            array[i][j]=count++;
        }
        for(;i<sX+n-offset;i++)
        {
            array[i][j]=count++;
        }
        for(;j>sY;j--)
        {
            array[i][j]=count++;
        }
        for(;i>sX;i--)
        {
            array[i][j]=count++;
        }
        offset+=2;
        sY++;
        sX++;
        loop--;
    }
    if(n%2 == 1)
    {
        array[mid][mid] = n*n;
    }
    return array;
}