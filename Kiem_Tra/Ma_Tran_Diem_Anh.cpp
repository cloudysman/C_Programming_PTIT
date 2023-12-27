#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        int matrix[n][m];
        int count[3] = {0, 0, 0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%1d", &matrix[i][j]);
                count[matrix[i][j]]++;
            }
        }
        int beautiful_triplets = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] != 0) {
                    beautiful_triplets += count[3 - matrix[i][j]];
                    count[matrix[i][j]]--;
                }
            }
        }
        printf("%d\n", beautiful_triplets);
    }
    return 0;
}

