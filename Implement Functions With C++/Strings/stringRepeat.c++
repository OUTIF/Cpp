#include <iostream>
#include <string>

using namespace std;

/*
 * Function: stringRepeat
 * ----------------------
 * Repeats the given string `s` a specified number of times (`r`) with an optional separator.
 * You can also choose to include the separator at the end of the resulting string.
 *
 * Parameters:
 *   s           - The string to be repeated.
 *   separator   - (Optional) A string to insert between each repetition. Default is "*".
 *   r           - (Optional) Number of repetitions. Default is 2.
 *   showsepend  - (Optional) If true, adds the separator after the final repetition. Default is false.
 *
 * Returns:
 *   A new string consisting of `s` repeated `r` times, separated by `separator`,
 *   and optionally ending with the separator.
 *
 * Overloads:
 *   stringRepeat(string s, int r, bool showsepend)
 *     - Uses the default separator (empty string).
 *
 *   stringRepeat(string s, bool showsepend)
 *     - Uses the default separator and default repetition count.
 */

const string defaultsep = "*";
const int defaultrep = 2;

// Function declarations
string stringRepeat(string s, string separator = defaultsep, int r = defaultrep, bool showsepend = false);
string stringRepeat(string s, int r, bool showsepend = false);
string stringRepeat(string s, bool showsepend);

int main() {
    cout << stringRepeat("Yusuf", "-", 4, true) << endl;  // the main call to the function
    cout << stringRepeat("Yusuf", 4, true) << endl;      // overload with default separator
    cout << stringRepeat("Yusuf", true) << endl;         // overload with default separator and repetition count
    cout << stringRepeat("Yusuf") << endl;               // overload with default separator, repetition count, and showsepend
    return 0;
}

// Main implementation
string stringRepeat(string s, string separator, int r, bool showsepend) {
    string result;
    for (int i = 0; i < r; i++) {
        result += s;
        if (i != r - 1 || showsepend) {
            result += separator;
        }
    }
    return result;
}

// Overload: uses default separator
string stringRepeat(string s, int r, bool showsepend) {
    return stringRepeat(s, defaultsep, r, showsepend);
}

// Overload: uses default separator and repetition count
string stringRepeat(string s, bool showsepend) {
    return stringRepeat(s, defaultsep, defaultrep, showsepend);
}
