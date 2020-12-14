#include <iostream>
using namespace std;

int main() {
	int n, G, g, prev, count=0;
	bool found = false;
	cin >> n;

	while(n--) {
		cin >> G;
		cin >> prev;
		G--;
		count++;
		while(G--){
			cin >> g;
			count++;
			if(g-1 != prev && !found) { 
				cout << count << endl;
				found = true; 
			}
			prev = g;
		}
		found = false;
		count = 0;
	}

	return 0;
}
