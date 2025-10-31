#include <iostream>
using namespace std;

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;

    int vowels = 0, consonants = 0;

    for (char c : text) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowels++;
        } else {
            consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
