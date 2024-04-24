#include <string>

long long step(int osn, int pow, int mod) {
    if (pow == 0) {
        return 1;
    }
    if (pow % 2 == 0) {
        return (step(osn, pow / 2, mod) * step(osn, pow / 2, mod)) % mod;
    }
    else {
        return (osn * step(osn, pow - 1, mod)) % mod;
    }
}

bool first_is_pref_of_second(std::string s1, std::string s2) {
    if (s1.size() <= s2.size() && s2.substr(0, s1.size()) == s1) {
        return true;
    }
    return false;
}

bool first_is_suff_of_second(std::string s1, std::string s2) {
    if (s1.size() <= s2.size() && s2.substr(s2.size() - s1.size()) == s1) {
        return true;
    }
    else {
        return false;
    }
}

bool can_connect_first_with_second(std::string s1, std::string s2, int need_to_connect) {
    if (s1.size() >= need_to_connect && s2.size() >= need_to_connect) {
        if ((s1.substr(s1.size() - need_to_connect) == s2.substr(0, need_to_connect) ||
             s2.substr(s2.size() - need_to_connect) == s1.substr(0, need_to_connect))) {
            return true;
        }
    }
    return false;
}

int solve_5(int L, int m, std::string& s1, std::string& s2) {
    int ans = 0;
    unsigned int size1 = s1.size(), size2 = s2.size();
    if (size1 + size2 <= L) {
        ans += 2 * step(26, L - size1 - size2, m);
        if (((first_is_suff_of_second(s1, s2) && first_is_pref_of_second(s1, s2)) || (first_is_suff_of_second(s2, s1) && first_is_pref_of_second(s2, s1))) && L > 2 * std::max(size1, size2)) {
            ans -= step(26, L - std::max(size1, size2), m);
        }
        ans %= m;
    }
    else {
        if (can_connect_first_with_second(s1, s2, size1 + size2 - L) || can_connect_first_with_second(s2, s1, size1 + size2 - L)) {
            ans = 1;
        }
        else {
            ans = 0;
        }
    }
    return ans;
}