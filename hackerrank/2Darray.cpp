#include <bits/stdc++.h>
#include <iostream>
#include <utility>

using namespace std;
// Complete the hourglassSum function below.
struct Point{
    int x, y;                                                              
	Point(int x, int y){
        this->x = x;
        this->y = y;
    }
};

const vector<Point> D6 = {Point(-1,0), Point(-1,-1), Point(-1,1),
                            Point(1,-1), Point(1,0), Point(1,1), Point(0,0)};


int hourglassSum(vector<vector<int>> arr) {
    int max = -100;

    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            int sum = 0;
            for(int e=0;e<D6.size();e++) {
                sum += arr[i+D6[e].x][j+D6[e].y];
            }

            if(sum > max) { max = sum; }
        }
    }
    return max;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

