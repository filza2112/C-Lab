#include <iostream>
#include <cstring>
using namespace std;

void count(const string& text) {
    int spaces = 0, tabs = 0, sentences = 0, vowels = 0;

    for (char ch : text) {
        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '.' || ch == '!' || ch == '?')
            sentences++;
        else if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
            vowels++;
    }

    cout << "Spaces: " << spaces << "\nTabs: " << tabs << "\nSentences: " << sentences << "\nVowels: " << vowels << endl;
}

void replaceSpaces(string& text) {
    size_t pos = 0;
    while ((pos = text.find("  ", pos)) != string::npos) {
        text.replace(pos, 2, " ");
        pos += 1;
    }

    cout << "Text after replacing multiple spaces with single space:\n" << text << endl;
}

void countParagraphs(const string& text) {
    int paragraphs = 1; // Assuming at least one paragraph

    for (char ch : text) {
        if (ch == '\n')
            paragraphs++;
    }

    cout << "Paragraphs: " << paragraphs << endl;
}

int main() {
    string text;

    cout << "Enter a piece of text (end input with a line containing only 'end'):\n";
    
    while (true) {
        string line;
        getline(cin, line);
        
        if (line == "end")
            break;

        text += line + "\n";
    }

    cout << "\nMenu:\n";
    cout << "1. Count Spaces, Tabs, Sentences, and Vowels\n";
    cout << "2. Replace Multiple Spaces with Single Space\n";
    cout << "3. Count Paragraphs\n";
    cout << "Enter your choice (1-3): ";

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            count(text);
            break;
        case 2:
            replaceSpaces(text);
            break;
        case 3:
            countParagraphs(text);
            break;
        default:
            cout << "Invalid choice\n";
            break;
    }

    return 0;
}
