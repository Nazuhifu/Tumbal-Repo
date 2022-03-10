#include<bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	x = 0;
	scanf("%d",&y);
	for(int i = 1; i <= y; i++){
		for(int j = 1; j <= i; j++){
			printf("%d", (x % 10));
			x++;
		}
		printf("\n");
	}
}
