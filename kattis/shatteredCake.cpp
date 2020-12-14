#include <iostream>
using namespace std;

int main(){
	
	int w , n, total=0;

	cin >> w >> n;
	
	while(n--) {
		int L, W;

		cin >> L >> W;
		total += L * W;
	}

	cout << total/ w << endl;

	return 0;
}
