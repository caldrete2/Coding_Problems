#include <bits/stdc++.h>

using namespace std;


void checkSize(long n, string s){
	/*if(s.length() != n) {
		if(n - s.length() > s.length())
			checkSize(n, s.copy(s,s.length(),0));
		else
			checkSize(n, s.copy(s,n-s.length(),0));
	}
*/
	char str[n];
	s.copy(str,s.length(),0);
	for(char c : str) cout << c;
	
}
// Complete the repeatedString function below.
long repeatedString(string s, long n) {
	checkSize(n, s);
	//cout << s << endl;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

