#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// typedef struct
// {
//     long *array;
//     size_t used;
//     size_t size;
// } Array;
// int cnt = 0;
// void combinationUtil(long N, long K, long startNumber, Array *combinationList);
// void findCombination(long N, long K);
// void initArray(Array *a, size_t initialSize);
// void insertArray(Array *a, int element);
// void freeArray(Array *a);
// void insertArray(Array *a, int element)
// {
//     if (a->used == a->size)
//     {
//         a->size *= 2;
//         a->array = realloc(a->array, a->size * sizeof(int));
//     }
//     a->array[a->used++] = element;
// }
// void initArray(Array *a, size_t initialSize)
// {
//     a->array = malloc(initialSize * sizeof(int));
//     a->used = 0;
//     a->size = initialSize;
// }
// void freeArray(Array *a)
// {
//     free(a->array);
//     a->array = NULL;
//     a->used = a->size = 0;
// }
// void printArray(Array *a)
// {
//     for (long i = 0; i < a->used; i++)
//         printf("%ld ", a->array[i]);
//     printf("\n");
// }
// void removeFromArray(Array *a, int idx)
// {
//     free(*(a->array+idx-1));
//     a->used-=1;
// }
// void findCombinations(long N, long K)
// {
//     printf("Given Number: %ld , subset size K: %ld", N, K);
//     Array *combinationList;
//     combinationUtil(N, K, 1, combinationList);
// }
// void combinationUtil(long N, long K, long startNumber, Array *combinationList)
// {
//     if (K == 0)
//     {
//         cnt++;
//         printArray(combinationList);
//         return;
//     }
//     for (long i = startNumber; i <= N; i++)
//     {
//         insertArray(combinationList, i);
//         combinationUtil(N, K - 1, i + 1, combinationList);
//         removeFromArray(combinationList, combinationList->used - 1);
//     }
// }
int cnt = 0;
void combinationUtil(int arr[], int n, int r, int index, int data[], int i, int store[][r])
{

	if (index == r) {
        for (int j = 0; j < r; j++)
			store[cnt][j] = data[j];
        cnt++;
		return;
	}
	if (i >= n)
		return;
	data[index] = arr[i];
	combinationUtil(arr, n, r, index + 1, data, i + 1, store);
	combinationUtil(arr, n, r, index, data, i + 1, store);
}
void printCombination(int arr[], int n, int r)
{
	int data[r];
    int store[100000][r];
	combinationUtil(arr, n, r, 0, data, 0, store);
    printf("The Toal Number of Combinations: %d\n", cnt);
    for(int i=0;i<cnt;i++)
    {
        for(int j=0;j<r;j++)
            printf("%d ", store[i][j]);
        printf("\n");
    }
}

int main()
{
    int n, k;
    printf("Pleae Enter the Value of n: ");
    scanf("%d", &n);
    printf("Please Enter the Value of k: ");
    scanf("%d", &k);
    int arr[n];
    for(int i=1;i<=n;i++) arr[i-1] = i;
    printCombination(arr,n,k);
   
    return 0;
}