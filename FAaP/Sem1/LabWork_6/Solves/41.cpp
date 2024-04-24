#include <iostream>
#include <string>
using namespace std;
char low(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 'a' - 'A';
    }
    return c;
}
int main() {
    string st, ans = "";
    getline(cin, st);
    for (int i = 0; i < st.size(); i++) {
        if (st[i] != 'C' && st[i] != 'Q' && st[i] != 'W' && st[i] != 'X') {
            ans += st[i];
        }
    }
    st = ans;
    ans = "";
    for (int i = 0; i < st.size(); i++) {
        if (low(st[i]) == 'y' && i + 2 < st.size() && low(st[i + 1]) == 'o' && low(st[i + 2]) == 'u') {
            if (low(st[i]) == st[i]) {
                ans += "u";
            }
            else ans += "U";
            i += 2;
            continue;
        }
        if (low(st[i]) == 'p' && i + 1 < st.size() && low(st[i + 1]) == 'h') {
            if (low(st[i]) == st[i]) {
                ans += 'f';
            }
            else ans += 'F';
            i++;
            continue;
        }
        if (low(st[i]) == 't' && i + 1 < st.size() && low(st[i + 1]) == 'h') {
            if (low(st[i]) == st[i]) {
                ans += 'z';
            }
            else ans += 'Z';
            i++;
            continue;
        }
        if (low(st[i]) == 'e' && i + 1 < st.size() && low(st[i + 1]) == 'e') {
            if (low(st[i]) == st[i]) {
                ans += 'i';
            }
            else ans += 'I';
            i++;
            continue;
        }
        if (low(st[i]) == 'q' && i + 1 < st.size() && low(st[i + 1]) == 'u') {
            if (low(st[i]) == st[i]) {
                ans += "kv";
            }
            else ans += "Kv";
            i++;
            continue;
        }
        if (low(st[i]) == 'o' && i + 1 < st.size() && low(st[i + 1]) == 'o') {
            if (low(st[i]) == st[i]) {
                ans += "u";
            }
            else ans += "U";
            i++;
            continue;
        }
        if (low(st[i]) == 'q') {
            if (low(st[i]) == st[i]) {
                ans += 'k';
            }
            else ans += 'K';
            continue;
        }
        if (st[i] == 'x') {
            ans += "ks";
            continue;
        }
        if (low(st[i]) == 'w') {
            if (low(st[i]) == st[i]) {
                ans += 'v';
            }
            else ans += 'V';
            continue;
        }
        ans += st[i];
    }
    st = ans;
    ans = "";
    for (int i = 0; i < st.size(); i++) {
        if (low(st[i]) == 'c' && i + 1 < st.size() && (low(st[i + 1]) == 'e' || low(st[i + 1]) == 'i' || low(st[i + 1]) == 'y')) {
            if (low(st[i]) == 'c') {
                ans += 's';
            }
            else ans += 'S';
            continue;
        }
        if (low(st[i]) == 'c') {
            if (low(st[i]) == 'c') {
                ans += 'k';
            }
            else ans += 'K';
            continue;
        }
        ans += st[i];
    }
    st = ans;
    ans = "";
    string dop = "qwrtpsdfghjklzxcvbnm";
    for (int i = 0; i < st.size(); i++) {
        if (dop.find(low(st[i])) != string::npos) {
            int p = i;
            ans += st[i];
            while (i < st.size() && low(st[p]) == low(st[i])) {
                i++;
            }
            i--;
            continue;
        }
        ans += st[i];
    }
    cout << ans;
}
