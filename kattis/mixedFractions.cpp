#include <iostream>
using namespace std;

int main() {
	int num, denom;

	while(true){
		cin >> num >> denom;
		if(num == 0 || denom == 0) break;
		cout << num/denom << " " << num%denom << " / " << denom << endl;
	}

	return 0;
}
