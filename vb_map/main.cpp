#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> lft;
    lft["jan"] = 10;
    lft["an"] = 12;
    lft["jan"] = 15; // verandert value bij jan naar 15
    lft.insert(pair<string,int>("piet",11));
    lft.insert(pair<string,int>("piet",18)); // voegt niks toe, want piet bestaat al
    cout << lft.size() << endl; // 3
    cout << lft["an"] << endl; // 12
    cout << lft["ann"] << endl; // voegt ann toe (met waarde 0) en print 0 als waarde
    cout << lft.size() << endl;

    map<string, int>::iterator it = lft.begin();
    while (it != lft.end()) {
        cout << it->first << "->"
             << it->second << endl;
        it++;
    }

    it = lft.find("ann");
    if (it != lft.end()) // als ann er effectief inzit, en je dus niet op de end-iterator staat
        lft.erase(it); // verwijder
    cout << lft.size() << endl;
    for (pair<string,int> p : lft) // forearch loop om map te overlopen
        cout << p.first << "->"
             << p.second << endl;

    lft.erase("piet"); // verwijder piet
    cout << lft.size() << endl;
    it = lft.begin();
    while (it != lft.end()) { // iterator om map te overlopen; opm.: (*it).first   ==   it->first
        cout << (*it).first << "->"
             << (*it).second << endl;
        it++;
    }

    return 0;
}