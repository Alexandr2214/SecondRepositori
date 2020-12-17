#include <iostream>
#include <string>

using namespace std;

int main() {
    int occurences = 0;
    string::size_type pos = 0;
    string str = "Hi student";
    string target = " ";

    while ((pos = str.find(target, pos)) != string::npos) {
        ++occurences;
        pos += target.length();
    }

    if (occurences == 2) {
        size_t firstIndex = str.find_first_of(target);
        size_t lastIndex = str.find_last_of(target);
        cout << "Substring: " << str.substr(firstIndex + 1, lastIndex - firstIndex) << endl;
    }
    else if (occurences == 1) {
        cout << "" << endl;
    }

    return 0;
}

