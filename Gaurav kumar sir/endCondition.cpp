#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void EndTrack(int i, int j, int row, int col, vector<pair<int, int>>& ans) {
    if (i == row && j == col) {
        for (auto temp : ans) {
            cout << temp.first << " " << temp.second << " ";
        }
        cout << endl;
        return;
    }

    if (i > row || j > col) {
        return;
    }

    ans.push_back({i, j});
    EndTrack(++i, j, row, col, ans);
    EndTrack(i, ++j, row, col, ans);
}

int main()
{	vector<pair<int,int>> ans;
	EndTrack(0,0,2,2,ans);
	return 0;
}
