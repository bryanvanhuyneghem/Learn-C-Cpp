#include <queue>
#include <iostream>
using namespace std;

int main() {
    priority_queue<string> qu;
    qu.push("een");
    qu.push("twee");
    qu.push("drie");
    qu.push("vijf");
    qu.push("vjjf");
    cout << qu.size() << endl;
    while (!qu.empty()) {
        cout << qu.top()<< endl; //geen front() gebruiken!!
        qu.pop();
    }
    cout << qu.size() << endl;

    cout << "--------" << endl;

    priority_queue<int> qu2;
    qu2.push(10);
    qu2.push(14);
    qu2.push(9);
    cout << qu2.size() << endl;
    while (!qu2.empty()) {
        cout << qu2.top()<< endl; //geen front() gebruiken!!
        qu2.pop();
    }
    cout << qu2.size() << endl;


    return 0;
}