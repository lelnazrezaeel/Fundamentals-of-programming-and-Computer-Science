#include <stdio.h>

void coinCombinations(int n, int coins[], int index, int selected[]) {
    if (n == 0) {
        printf("%d %d %d\n", selected[0], selected[1], selected[2]);
        return;
    }
    if (index >= 3 || n < 0) {
        return;
    }
    selected[index]++;
    coinCombinations(n - coins[index], coins, index, selected);
    selected[index]--;
    coinCombinations(n, coins, index + 1, selected);
}
int main() {
    int n;
    scanf("%d", &n);
    int coins[] = {2, 5, 10};
    int selected[] = {0, 0, 0};
    coinCombinations(n, coins, 0, selected);
    return 0;
}