#include <stdio.h>

int main() {
    char word[100];
    int vowels, consonants;

    for(int i = 1; i <= 5; i++) {
        printf("Enter word %d: ", i);
        scanf("%s", word);

        vowels = 0;
        consonants = 0;

        int j = 0;
        while(word[j] != '\0') {
            char ch = word[j];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                vowels++;
            else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) consonants++;
            j++;
        }

        printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    }

    return 0;
}