#include <bits/stdc++.h>
using namespace std;
using pss = pair<string, string>;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> order;
    map<string, set<pss>> table;
    string s;
    while (getline(cin, s)) {
        string anime = s.substr(0, s.find(';'));
        string inc = s.substr(anime.size() + 1, s.find(';', anime.size() + 2) - anime.size() - 1);
        string date = s.substr(s.size() - 5);
        if (!table.count(inc)) {
            order.push_back(inc);
        }
        table[inc].insert({date, anime});
    }
    for (int i = 0; i < order.size(); i++) {
        cout << order[i] << '\n';
        for (auto pr: table[order[i]]) {
            cout << pr.second << '\n';
        }
        if (i < order.size() - 1) {
            cout << "--------------------------------------------------\n";
        }
    }
}