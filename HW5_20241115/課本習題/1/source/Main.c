#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int outcomes[13] = { 0 }; // 用來儲存2到12點數出現次數的陣列，索引2~12對應點數
    int dice1, dice2, sum;
    const int rolls = 36000; // 總投擲次數

    // 初始化隨機數產生器
    srand(time(NULL));

    // 模擬投擲骰子
    for (int i = 0; i < rolls; i++) {
        dice1 = rand() % 6 + 1; // 第一顆骰子的點數，範圍1-6
        dice2 = rand() % 6 + 1; // 第二顆骰子的點數，範圍1-6
        sum = dice1 + dice2;
        outcomes[sum]++; // 計算各點數的出現次數
    }

    // 顯示結果
    printf("Points\tNumber of occurrences\tProbability(frequency)\n"); //點數\出現次數\機率(次數)
    for (int i = 2; i <= 12; i++) {
        double expected = rolls * (i == 7 ? 6.0 : i == 2 || i == 12 ? 1.0 : i == 3 || i == 11 ? 2.0 : i == 4 || i == 10 ? 3.0 : i == 5 || i == 9 ? 4.0 : 5.0) / 36;
        printf("%d\t%d\t\t        %.2f\n", i, outcomes[i], expected);
    }

    return 0;
}