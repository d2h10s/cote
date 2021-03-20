#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	int alen = a.length();
	int blen = b.length();
	if (alen == blen) {
		return a < b;
	}
	else return alen < blen;
}
int main(){
	vector<string> v;
	string temp;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), compare);
	v.erase(unique(v.begin(), v.end()), v.end());
	

	for (auto i = v.begin(); i != v.end(); i++) {
		cout << *i + '\n';
	}
}