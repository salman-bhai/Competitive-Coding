#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[5][5];

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			scanf("%d",&arr[i][j]);
			if(arr[i][j] == 1) {
				printf("%d\n",(abs(2-i)+abs(2-j)));
			}
		}
	}

	return 0;
}