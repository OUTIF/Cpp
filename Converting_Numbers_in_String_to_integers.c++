#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    char text[100] = "t1E2S3T4";
    string str;
    int result = 0;

    // Extract digits from the input text and push it back into new string.
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            str.push_back(text[i]);
        }
    }

    // Convert the extracted digits into an integers
    for (int i = 0; i < str.length(); i++) {
        result = result * 10 + (str.at(i) - '0');
    }

    // Output the results
    cout << "Original String: " << text << endl;
    cout << "Resulting integer: " << result << endl;

    return 0;
}
