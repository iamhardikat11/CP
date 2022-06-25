#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void swap(char *a, char *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high, string &a)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
            swap(&a[i], &a[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, string &s)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, s);
        quickSort(arr, low, pi - 1, s);
        quickSort(arr, pi + 1, high, s);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N;
    cin >> N;
    string a;
    cin >> a;
    int mx = -1;
    int count = 0;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    quickSort(arr, 0, N - 1, a);
    vector<int> store1(N, 0);
    for (int i = 0; i < N; i++)
    {
        count += (a[i] == '1');
        store1[i] = count;
    }
    int max_count = count;
    for (int i = 0; i < N; i++)
    {
        int max_poss;
        int mx = 0;
        if (a[i])
        {
            max_poss = (((i == 0) ? i + 1 : i + 1 - store1[i - 1])) + count - store1[i];
        }
        else
        {
            max_poss = ((i + 1) - store1[i]) + count - store1[i];
        }
        if (i != N - 1 && arr[i] == arr[i + 1])
        {
            int idx = i;
            while (i<N && arr[i] == arr[i + 1])
            {
                i++;
            }
            int n = idx - i + 1;
            if (mx >= n / 2)
                max_poss = max_poss = ((i + 1) - store1[i]) + count - store1[i];
            else
                max_poss = mx + (count - store1[i]) + i + (((i == 0) ? i + 1 : i + 1 - store1[i - 1]));
        }
        max_count = max(max_count, max_poss);
    }
    max_count = max(max_count, N - count);
    cout << max_count << endl;
    return 0;
}