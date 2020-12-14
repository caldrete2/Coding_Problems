#include <iostream>
#include <string>

using namespace std;

void compareStrings(string a, string b) {
	cout << a << "\n" << b << "\n";
	for(int i=0;i<a.length();i++) {
		if(a[i] == b[i])
			cout << ".";
		else
			cout << "*";
	}
	cout << "\n\n";	
}

int main() {
	int n;
	string s1, s2;

	cin >> n; 
	
	while(n--) {
		cin >> s1 >> s2;
		compareStrings(s1, s2);
	}

	return 0;
}
