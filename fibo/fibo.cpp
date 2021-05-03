#include <iostream>
#include <stdlib.h>

using namespace std;
typedef long long ll;

ll recur(int i){
	if (i == 0) {
		return 0;
	}
	else if (i == 1) {
		return 1;
	}
	else {
		return recur(i-1) + recur(i-2);
	}
}

int main(int argc, char *argv[]){
	// cout << atoi(argv[1]);
	cout << recur(atoi(argv[1]));
	return 0;
}