#include <stdio.h>
#include <stdlib.h>

int *towSum(int *nums, int numsSize, int target, int *returnSize)
{
  int i = 0;
  int j;

  *returnSize = 0;
  while (i < numsSize - 1)
  {
    j = i + 1;
    while (j < numsSize)
    {
      if (nums[i] + nums[j] == target)
      {
        int *result = malloc(sizeof(int) * 2);
        result[0] = i;
        result[1] = j;
        *returnSize = 2;
        return (result);
      }
      j++;
    }
    i++;
  }
  return (NULL);
}
int main()
{
  //int *returnArray = (int *)malloc(sizeof(int) * 2);
  int size;
  int array[4] ={3,4,5,6};
  int *returnArray = towSum(array, 4, 5, &size);

  int i = 0;
/*
  while (i < 2)
  {
    printf("%d\n", returnArray[i]);
    i++;
  }
  */
  printf("%d", size);
}
