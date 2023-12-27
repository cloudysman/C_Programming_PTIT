#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
    return a*b/gcd(a, b);
}
void rutgon(int* a, int *b){
    int ucln = gcd(*a, *b);
    *a /= ucln;
    *b /= ucln;
}
struct PhanSo{
    int tuso, mauso;
};
int main(){
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++){
        printf("Case #%d:\n", test);
        struct PhanSo p, q;
        scanf("%d %d %d %d", &p.tuso, &p.mauso, &q.tuso, &q.mauso);
        rutgon(&p.tuso, &p.mauso);
        rutgon(&q.tuso, &q.mauso);
        int mausochung = lcm(p.mauso, q.mauso);
        p.tuso *= mausochung / p.mauso;
        p.mauso = mausochung;
        q.tuso *= mausochung / q.mauso;
        q.mauso = mausochung;
        printf("%d/%d %d/%d\n", p.tuso, p.mauso, q.tuso, q.mauso);
        struct PhanSo ans;
        ans.tuso = p.tuso + q.tuso;
        ans.mauso = mausochung;
        rutgon(&ans.tuso, &ans.mauso);
        printf("%d/%d\n", ans.tuso, ans.mauso);
        ans.tuso = p.tuso * q.mauso;
        ans.mauso = p.mauso * q.tuso;
        rutgon(&ans.tuso, &ans.mauso);
        printf("%d/%d\n", ans.tuso, ans.mauso);
    }
    return 0;
}

