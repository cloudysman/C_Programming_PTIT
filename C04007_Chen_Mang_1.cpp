#include <stdio.h>

void nhapMang(int a[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}

void chenMang(int a[], int &n, int b[], int m, int p){
    for(int i = n-1; i >= p; i--){
        a[i+m] = a[i];
    }
    for(int i = 0; i < m; i++){
        a[p+i] = b[i];
    }
    n += m;
}

int main(){
    int n, m, p;
    int a[200], b[100];
    scanf("%d%d", &n, &m);
    nhapMang(a, n);
    nhapMang(b, m);
    scanf("%d", &p);
    chenMang(a, n, b, m, p);
    xuatMang(a, n);
    return 0;
}

