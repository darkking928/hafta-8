#include <stdio.h>
#include <string.h>

void findWordsStartingWith(const char* text, const char* prefix, const char* words[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (strncmp(text, words[i], strlen(prefix)) == 0) {
            printf("%s\n", words[i]);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No words starting with '%s' found.\n", prefix);
    }
}

int main() {
    const char* words[] = {
        "apple",
        "banana",
        "apricot",
        "avocado",
        "grape",
        "melon",
        "mango",
        "papaya",
        "orange",
        "kiwi"
    };
    const int size = sizeof(words) / sizeof(words[0]);
    
    const char* prefix = "ap";
    findWordsStartingWith(prefix, prefix, words, size);
    
    return 0;
}