#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char* str);

int main() {
    char str[] = "Hello, World!";
    printf("original string: %s\n", str); //原始字串
    printf("Reverse output: "); //反向輸出
    stringReverse(str);
    printf("\n");

    return 0;
}

void stringReverse(const char* str) {
    if (*str == '\0') {
        return; // 基底條件: 遇到結尾字元時停止
    }

    // 遞迴呼叫下一個字元，先處理字串的下一個字元，直到字串的最後一個有效字元為止。
    stringReverse(str + 1);

    // 當遞迴回到這裡時，開始從最後一個字元往前印
    putchar(*str);

    /*假設 str 是指向 "Hello" 的字串。遞迴過程如下：
    呼叫過程：
    stringReverse("Hello") → stringReverse("ello") → stringReverse("llo") → stringReverse("lo") → stringReverse("o") → stringReverse("")
    基底條件：當 str 到達空字串 "" 時停止。
    回溯過程：
    putchar(*str) 從 str = "o" 開始回溯，依次打印每個字元。
    輸出順序：o → l → l → e → H
    最終輸出反向輸出字串的結果是 olleH，即從最後一個字元往回到第一個字元，達成反向輸出的效果。*/
}