//https://codeforces.com/problemset/problem/71/A

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of words

    for (int i = 0; i < n; i++) {
        char word[101];
        scanf("%s", word);  // Read each word

        int length = strlen(word);

        if (length > 10) {
            // Print abbreviated form: first letter, number of middle letters, last letter
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            // Print the word as it is
            printf("%s\n", word);
        }
    }

    return 0;
}
