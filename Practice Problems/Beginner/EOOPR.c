#include <stdio.h>
#include <math.h>

int main() {
    int t, x, y, min;
	scanf("%d", &t);
	while (t--){
		scanf("%d %d", &x, &y);
		printf("%d\n", step(x,y));
	}
	return 0;   
}

int step(int x, int y){
    if (x < y) {
      if ((y - x) % 2 == 0) {
        if ((y - x) % 4 == 0) {
          return 3;
        } else {
          return 2;
        }
      } else {
        return 1;
      }
    } else if (x > y) {
      if ((x - y) % 2 == 0) {
        return 1;
      } else {
        return 2;
      }
    } else {
      return 0;
    }
}
