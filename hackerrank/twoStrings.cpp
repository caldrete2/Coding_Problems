#include <bits/stdc++.h>
#include <set>
using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    set<char> data;
    bool found = false;

    for(char c: s1) {
        data.insert(c);
    }

    for(char c: s2){
        if(data.count(c) > 0){
            found = true;
            break;
        }
    }
    data.clear();
    return found? "YES":"NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

