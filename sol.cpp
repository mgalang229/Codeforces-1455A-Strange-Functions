#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	string s;
	cin >> s;
  //f(x) is a function where you reverse the value and omit the leading zeroes
  //for example, f(100) = 1
  //g(x) = x/f(f(x))
  //for example, g(100) = 100/f(f(100))
  //g(100) = 100/f(1)
  //g(100) = 100/1
  //therefore, g(100) = 100
  //as shown above, the number will always be itself so just print the size of the string
	cout << (ll)s.size() << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
