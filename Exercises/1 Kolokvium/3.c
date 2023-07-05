#include <stdio.h>

int zbirDeliteli(int n) {
  int d = 0;

  for(int i = 1; i < n; i++) {
    if(n % i == 0) {
      d += i;
    }
  }

  return d;
}

int main() {
  int n;
  scanf("%d", &n);

  int broj = 0, del = 0;

  for(int i = 1; i < n; i++) {
    int zbir = zbirDeliteli(i);

    if(zbir > del) {
      del = zbir;
      broj = i;
    }
  }

  printf("%d", broj);

  return 0;
}
