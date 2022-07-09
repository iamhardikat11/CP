// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// function that will be called recursively
int recursive_solve(int i, int j, int steps, int n,
					map<pair<int, int>, int> &m)
{
	// If there's no more move to make and
	// this position hasn't been visited before
	if (steps == 0 && m[make_pair(i, j)] == 0) {

		// mark the position
		m[make_pair(i, j)] = 1;

		// increase the count	
		return 1;
	}
	
	int res = 0;
	if (steps > 0) {

		// valid movements for the knight
		int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
		int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };

		// find all the possible positions
		// where knight can move from i, j
		for (int k = 0; k < 8; k++) {

			// if the positions lies within the
			// chessboard
			if ((dx[k] + i) >= 0
				&& (dx[k] + i) <= n - 1
				&& (dy[k] + j) >= 0
				&& (dy[k] + j) <= n - 1) {

				// call the function with k-1 moves left
				res += recursive_solve(dx[k] + i, dy[k] + j,
									steps - 1, n, m);
			}
		}
	}
	return res;
}

// find all the positions where the knight can
// move after k steps
int solve(int i, int j, int steps, int n)
{
	map<pair<int, int>, int> m;
	return recursive_solve(i, j, steps, n, m);
}

// driver code
int main()
{
	int i = 0, j = 0, k = 100, n = 8;

	cout << solve(i, j, k, n);

	return 0;
}
