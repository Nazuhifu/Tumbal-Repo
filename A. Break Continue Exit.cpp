#include<bits/stdc++.h>

using namespace std;

int main() {
	int A;
	scanf("%d",&A);
	for (int y = 1; y <= A; y++) {
		if (y == 42) {
			printf("ERROR\n");
			break;
		}
		if (y % 10 == 0) {
			continue;
		}
		printf("%d\n",y);
	}
}
