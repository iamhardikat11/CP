#include <bits/stdc++.h>
using namespace std;
void findpath(int N, int a[])
{
	if (a[0]) {
		cout << N + 1 << " ";
		for (int i = 1; i <= N; i++)
			cout <<i<< " ";
		return;
	}
	for (int i = 0; i < N - 1; i++) {
		if (!a[i] && a[i + 1]) {
			for (int j = 0; j <= i; j++)
				cout<< j+1 << " ";
			cout << N + 1 <<" ";
			for (int j = i + 2; j <= N; j++)
				cout << j << " ";
			return;
		}
	}
	for (int i = 1; i <= N; i++)
		cout << i << " ";
	cout << N + 1 << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin >> arr[i];
    	findpath(N, arr);
        cout << endl;
    }
	return 0;
}

