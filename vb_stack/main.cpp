#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<string> st;
    cout << st.size() << endl;
    st.push("een");
    st.push("twee");
    st.push("drie");
    cout << st.size() << endl;
    //for-each lus gaat niet!!
    /*
    for (string s: st)
       cout << s << endl;
    */
    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }
    cout << st.size() << endl;

    cout << "-------" << endl;

    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Top unaltered: " << stack.top() << endl;
    cout << "Top altered: " << stack.top()++ << endl;
    cout << "Top after: " << stack.top() << endl;

    return 0;
}