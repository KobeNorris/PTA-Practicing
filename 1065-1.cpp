#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char *argv[]) {
	int n, m, a, b, c;
	scanf("%d", &n);
	int mapp[100001] = {0};
	for (int i = 0; i<n; i++) {
		scanf("%d %d", &a, &b);
		mapp[a+1] = b+1;
		mapp[b+1] = a+1;
	}
	scanf("%d", &m);
	vector<int> v(m), ans;
	int d[100001] = {0};
	for (int i = 0; i<m; i++) {
		scanf("%d", &c);
		v[i] = c+1;
		d[v[i]] = 1;
	}
	for (int i = 0; i<m; i++) {
		if ( mapp[v[i]]!=0 && d[mapp[v[i]]]==1 ) continue;
		ans.push_back(v[i]-1);
	}
	sort(ans.begin(), ans.end());
	printf("%d\n", ans.size());
	for (int i = 0; i<ans.size(); i++) {
		if (i) printf(" ");
		printf("%05d", ans[i]);
	}
	if (ans.size()) printf("\n");
	
	return 0;
}
