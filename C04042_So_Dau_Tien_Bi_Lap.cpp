#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int val;
    int pos;
} Node;

int compare(const void *a, const void *b) {
    Node *nodeA = (Node *)a;
    Node *nodeB = (Node *)b;
    return nodeA->val - nodeB->val;
}

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, i;
        scanf("%d", &N);
        Node A[N];
        for (i = 0; i < N; i++) {
            scanf("%d", &A[i].val);
            A[i].pos = i;
        }
        qsort(A, N, sizeof(Node), compare);
        int min_pos = N, res = -1;
        for (i = 0; i < N - 1; i++) {
            if (A[i].val == A[i + 1].val && A[i].pos < min_pos) {
                min_pos = A[i].pos;
                res = A[i].val;
            }
        }
        if (res == -1) printf("NO\n");
        else printf("%d\n", res);
    }
    return 0;
}

