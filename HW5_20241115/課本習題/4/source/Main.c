#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int arr[], int size);

int main() {
    int arr[] = { 1, 23, 45, 2, 99, 34, 56 }; //陣列預設值
    int size = sizeof(arr) / sizeof(arr[0]); //陣列大小

    printf("Data items in original order\n"); //資料項目依原始順序排列

    for (int i = 0; i < 7; i++)
    {
        printf("%4d", arr[i]); //從arr[0]到arr[6]列印出來
    }

    printf("\nThe maximum value in the array is: %d\n", recursiveMaximum(arr, size)); //列印陣列中最大值

    return 0;
}

int recursiveMaximum(int arr[], int size) {
    // 基底條件：當size=1時，表示只剩下最後一個元素，直接返回該元素作為最大值。
    if (size == 1) {
        return arr[0];
    }

    // 遞迴：每次遞迴都減少陣列大小size，並取陣列前size-1個元素的最大值。
    int maxOfRest = recursiveMaximum(arr, size - 1);

    // 比較當前元素與其餘部分的最大值
    return (arr[size - 1] > maxOfRest) ? arr[size - 1] : maxOfRest;
    
    /*對於陣列 {1, 23, 45, 2, 99, 34, 56}：
    初始呼叫：recursiveMaximum(arr, 7)
    遞迴過程：
    recursiveMaximum(arr, 6) → recursiveMaximum(arr, 5) → ... → recursiveMaximum(arr, 1)
    遞迴呼叫過程從後往前，回溯過程從前面開始倆倆比較*/
}