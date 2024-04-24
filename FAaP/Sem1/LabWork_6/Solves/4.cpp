#include <iostream>
#include <string>

char lowerCase(char c) {
    return (c <= 'Z' && c >= 'A') ? (c + 'a' - 'A') : c;
}

int main() {
    std::string text, buf;
    std::getline(std::cin, text);

    for (char i : text)
        if (i != 'C' && i != 'Q' && i != 'W' && i != 'X')
            buf += i;
    text = buf; // убрать CQWX

    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 'q') {
            text[i] = 'k';
            if (i < text.size() - 1 && lowerCase(text[i + 1]) == 'u') {
                text[i + 1] = 'v';
            }
        }
    }

    buf = "";
    for (char& c : text) {
        if (c == 'x') buf += "ks";
        else buf += c;
    } // заменить x
    text = buf;

    buf = "";
    for (char& c : text) {
        if (c == 'w') buf += "v";
        else buf += c;
    } // заменить w
    text = buf;

    buf = "";
    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 'p' && i < text.size() - 1 && lowerCase(text[i + 1]) == 'h') {
            buf += lowerCase(text[i]) == text[i] ? 'f' : 'F';
            i += 1;
        }
        else buf += text[i];
    } // заменить ph
    text = buf;

    buf = "";
    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 't' && i < text.size() - 1 && lowerCase(text[i + 1]) == 'h') {
            buf += lowerCase(text[i]) == text[i] ? 'z' : 'Z';
            i += 1;
        }
        else buf += text[i];
    } // заменить th
    text = buf;

    buf = "";
    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 'e' && i < text.size() - 1 && lowerCase(text[i + 1]) == 'e') {
            buf += lowerCase(text[i]) == text[i] ? 'i' : 'I';
            i += 1;
        }
        else buf += text[i];
    } // заменить ee
    text = buf;

    buf = "";
    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 'o' && i < text.size() - 1 && lowerCase(text[i + 1]) == 'o') {
            buf += lowerCase(text[i]) == text[i] ? 'u' : 'U';
            i += 1;
        }
        else buf += text[i];
    } // заменить oo
    text = buf;

    buf = "";
    for (int i = 0; i < text.size(); ++i) {
        if (lowerCase(text[i]) == 'y' && i < text.size() - 2 && lowerCase(text[i + 1]) == 'o' && lowerCase(text[i + 2]) == 'u') {
            buf += lowerCase(text[i]) == text[i] ? 'u' : 'U';
            i += 2;
        }
        else buf += text[i];
    } // заменить you
    text = buf;

    for (int i = 0; i < text.size(); ++i) {
        if (text[i] == 'c') {
            if (i == text.size() - 1) {
                text[i] = 'k';
                continue;
            }
            if (lowerCase(text[i + 1]) == 'e' || lowerCase(text[i + 1]) == 'i' || lowerCase(text[i + 1]) == 'y') {
                text[i] = 's';
            }
            else {
                text[i] = 'k';
            }
        }
    }

    buf = "";
    std::string dop = "qwrtpsdfghjklzxcvbnm";
    for (int i = 0; i < text.size(); i++) {
        if (dop.find(lowerCase(text[i])) != std::string::npos) {
            int p = i;
            buf += text[i];
            while (i < text.size() && lowerCase(text[p]) == lowerCase(text[i])) {
                i++;
            }
            i--;
            continue;
        }
        buf += text[i];
    }
    text = buf;

    std::cout << text;
}