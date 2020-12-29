#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> mapToArray(multimap<int, int> a) {
	vector<int> v;

	for(auto it: a) {
		for(int i=0;i<it.first;i++) {
			v.push_back(it.second);
		}
	}

	return v;
}

multimap<int, int> mapValueSort(vector<int> a) {
	map<int, int> data;
	multimap<int, int> temp;

	for(auto e: a) 
		data[e]++;

	for(auto it: data)
		temp.insert({it.second, it.first});

	return temp;
}

int main() {
	vector<int> in;

	int n = 0;
	cin >> n;

	while(n--) {
		int a = 0;
		cin >> a;
		in.push_back(a);
	}

	multimap<int, int> myMap = mapValueSort(in);
	vector<int> ans = mapToArray(myMap);

	for(auto e: ans)
		cout << e << " ";

	return 0;
}
