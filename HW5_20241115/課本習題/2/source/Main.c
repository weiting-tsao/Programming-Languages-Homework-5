#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int start, int end, int key); //start起始索引，end結束索引

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; // 已排序的陣列
    int size = sizeof(arr) / sizeof(arr[0]); // 陣列大小
    /*sizeof(arr):計算整個陣列所佔的記憶體空間（單位是位元組）。
    若arr是一個int陣列，有10個元素，且每個整數佔4位元組，則sizeof(arr)回傳的值是10*4=40。
    sizeof(arr[0]):計算陣列中單一元素的大小。
    假設arr的元素型別是 int，則sizeof(arr[0])等於 4。
    sizeof(arr) / sizeof(arr[0]):總大小除以單一元素的大小，結果就是陣列的元素數量。*/

    int key; //目標值

    printf("Data items in original order\n"); //資料項目依原始順序排列

    for (int i = 0; i < 10; i++)
    {
        printf("%4d", arr[i]); //從arr[0]到arr[9]列印出來
    }

    printf("\n");
    printf("Please enter the value you want to search for: "); //輸入要搜尋的數值
    scanf("%d", &key);

    int result = binarySearch(arr, 0, size - 1, key); /*執行遞迴二分搜尋
                                                         start是0，end是size-1即為最後一個元素的索引，代表整個陣列的範圍*/

    if (result != -1) {
        printf("Value %d is found, at index %d.\n", key, result); //找到數值顯示索引位置
    }
    else {
        printf("Value %d is not in the array.\n", key);
    }

    return 0;
}

int binarySearch(int arr[], int start, int end, int key) {
    if (start > end) {
        return -1; // 如果範圍無效，表示找不到
    }

    int mid = start + (end - start) / 2; // 避免溢位，計算中間索引

    if (arr[mid] == key) {
        return mid; // 找到目標，回傳索引
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, start, mid - 1, key); // 在左半部分搜尋，將end更新為mid-1，start還是為0
    }
    else {
        return binarySearch(arr, mid + 1, end, key); // 在右半部分搜尋，將start更新為mid+1，end還是為size-1即為9
    }
}
