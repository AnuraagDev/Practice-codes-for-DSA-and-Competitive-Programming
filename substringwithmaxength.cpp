#include<iostream>
#include <set>
using namespace std;
int main()
{
    string s; cin >> s;
    set<char>st; int i = 0;
    int j = 0;
    int n = s.length();
    int max_length = 0;
    while (j < n) {
        if (!st.count(s[j])) {
            st.insert(s[j]);
        }
        else {
            while (s[i] != s[j]) {
                st.erase(s[i]);
                i++;
            }
            i++;
        }
        int len = j - i + 1;
        max_length = max(max_length, len);
        j++;
    }
    cout << max_length << " ";
}