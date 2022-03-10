#include<bits/stdc++.h>
using namespace std;

int main(){
	int N, input, faktor;
	scanf("%d", &N);
	for(int i = 1; i <= N; i++){
		faktor = 0;
		scanf("%d", &input);
		
		for(int j = 2; j <= sqrt(input); j++){
			if(input % j == 0){
				faktor++;
			}
		}
		if(faktor < 2) printf("YA\n");
		else printf("BUKAN\n");
	}
}
