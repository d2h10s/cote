#include <iostream>
#include <vector>
using namespace std;

int prioty(vector<int> list, int dacuNum, int idx) {
	vector<pair<int, int>> ll(dacuNum, { 0,0 });
	int i, j;
	for (i = 0; i < dacuNum; i++) {
		ll[i].first = i;
		ll[i].second = list[i];
	}
	if (dacuNum == 1) return 1;
	for (i = 0; i < dacuNum - 1; i++) {
		for (j = i + 1; j < dacuNum; j++) {
			if (ll[i].second < ll[j].second) {
				ll.push_back(ll[i]);
				ll.erase(ll.begin() + i);
				i--;
				break;
			}
		}
	}
	for (i = 0; i < dacuNum; i++) {
		if (ll[i].first == idx) return i + 1;
	}
}

int main() {
	int i, j, caseNum, dacuNum, idx;
	vector<int> list;
	cin >> caseNum;
	for (i = 0; i < caseNum; i++) {
		cin >> dacuNum >> idx; //scanf_s("%d %d", &dacuNum, &idx);
		list.assign(dacuNum, 0);
		for (j = 0; j < dacuNum; j++) {
			cin >> list[j]; // scanf_s("%d", &list[j]);
		}
		cout << prioty(list, dacuNum, idx) << endl;
	}

}