
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        long long cur = 0, last = 0, res = 0;
        char op = '+';
        for (int i = 0; i < (int)s.size(); i++) {
            if (isdigit(s[i])) {
                cur = cur * 10 + (s[i] - '0');
            }
            if ((!isdigit(s[i]) && s[i] != ' ') || i == (int)s.size() - 1) {
                if (op == '+') { res += last; last = cur; }
                else if (op == '-') { res += last; last = -cur; }
                else if (op == '*') { last = last * cur; }
                else if (op == '/') { last = last / cur; }
                op = s[i];
                cur = 0;
            }
        }
        res += last;
        return res;
    }
};
