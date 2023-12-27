#include <stdio.h>
#include<math.h>
long long reverse(long long n) {
  long long rev = 0;
  while (n > 0) {
    rev = rev * 10 + n % 10;
    n = n / 10;
  }
  return rev;
}

int is_beautiful(long long n) {
  long long first = n;
  while (first >= 10)
    first /= 10;
  long long last = n % 10;
  if (first == last * 2 || last == first * 2) {
    long long middle = (n % (long long)pow(10, (int)log10(n))) / 10;

    if (middle == reverse(middle)) {
      return 1; 
    }
    else {
      return 0; 
    }
  }
  else {
    return 0; 
  }
}

int main() {
  int t; 
  scanf("%d", &t);

  while (t--) { 
    long long n;
    scanf("%lld", &n); 

    if (is_beautiful(n)) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}

