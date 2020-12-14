#include <iostream>
#include <set>
using namespace std;

int main() {
	int in;
	int n = 10;
	const int mod = 42;
	set<int> data;
	
	while(n--) {
		cin >> in;
		data.insert(in%mod);
	}
	
	cout << data.size() << endl;
	return 0;
}
