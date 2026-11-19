#include <iostream>
#include <cctype>
using namespace std;

int countWords(char text[]);


int main() {
char text[1000];

    cout << "Enter a line: ";
    cin.getline(text, 1000);

    cout << "Number of words: " << countWords(text) << endl;

    return 0;
}



int countWords(char text[]) {
    int count = 0;
    bool hasLetter = false;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
     if (hasLetter) {
        count++;
        hasLetter = false;
    }
}
        else if ((isalpha(text[i]))){
            hasLetter = true;
        }
    }

    if (hasLetter){
        count++;
    }
    
    return count;
}