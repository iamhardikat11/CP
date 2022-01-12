/*
*Daily Coding Problem
*This problem was asked by Facebook.

Given an array of integers, write a function to determine whether the array could become non-decreasing by modifying at most 1 element.

For example, given the array [10, 5, 7], you should return true, since we can modify the 10 into a 1 to make the array non-decreasing.

Given the array [10, 5, 1], you should return false, since we can't modify any one element to get a non-decreasing array.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{  
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin >> v[i];
	int cnt = 0;
	for(int i=1;i<n;i++) 
		if(v[i-1]>v[i]) cnt++;
	if(cnt==0 || cnt==1) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
