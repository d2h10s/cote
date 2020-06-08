#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <queue>

using namespace std;

vector<string> solution(vector<string> record) {
    int i = 0, choice;
    const string menu[3] = { "Enter", "Leave", "Change" };
    vector<string> answer;
    string tmp, selection[3], line;
    while (!record.empty()) {
        istringstream input;
        input.str(record.front());
        record.erase(record.begin());
        for (i = 0; getline(input, line); i++)
            selection[i] = (input >> tmp);
        for (i = 0; i < 3; i++)
            if (menu[i] == selection[0]) choice = i;
        switch (choice) {
        case 0:
            tmp = (selection[2], "´ÔÀÌ µé¾î¿Ô½À´Ï´Ù.");
            answer.push_back(tmp);
            break;
        case 1:
            tmp = (selection[2], "´ÔÀÌ ³ª°¬½À´Ï´Ù.");
            answer.push_back(tmp);
            break;
        case 2:
            break;
        }
    }

    return answer;
}

int main() {
    vector<string> dd{ "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
    solution(dd);
}
