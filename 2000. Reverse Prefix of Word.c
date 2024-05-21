char* reversePrefix(char* word, char ch) {
    int i = 0;
    int j = 0;

    while (word[i] != '\0' && word[i] != ch)
        i++;
    
    if (word[i] == '\0')
        return (word);
    
    while (j < i) {
        char temp = word[j];
        word[j] = word[i];
        word[i] = temp;
        j++;
        i--;
    }
    return (word);
}
