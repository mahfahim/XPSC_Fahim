//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define ull unsigned long long
#define ldb long double

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
	int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		vector<int> x(k);
		for (int i = 0; i < k; i++) cin >> x[i];
		sort(x.rbegin(), x.rend());

		int c = 0;
		long long s = 0;

		while (c < x.size() && s + n - x[c] < n)
		{
			s += n - x[c++];
		}

		cout << c << '\n';
	}

	return 0;
    
    //********* Alhamdulillah *********
}