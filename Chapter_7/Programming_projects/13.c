#include <stdio.h>

int main(void)
{
    char ch;
    float character_count = 0, word_count = 0, average_word_length = 0;

    printf("Enter a sentence: ");

    //read the first character of the sentence whether it's space or not.
    ch = getchar();

    //get rid of any leading space in the sentence
    while (ch == ' ')
        ch = getchar();
    
    if (ch == '\n')
        printf("Please enter a sentence\n");

    for (;;) {
        while (ch != ' ' && ch != '\n') {
              character_count++;
              ch = getchar();
        }

        word_count++;

        while (ch == ' ') { // get rid of any space in between words
            ch = getchar();
        }

        if (ch == '\n')
            break;
        
    } 
    average_word_length = character_count / word_count;
    
    printf("Average word length: %.1f\n", average_word_length);

    return 0;
}
