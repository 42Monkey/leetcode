int mostWordsFound(char** sentences, int sentencesSize) {
    int i = 0;
    int max = 0;

    if (sentences == NULL || sentencesSize == 0)
        return (NULL);

    while (i < sentencesSize)
    {
        int j = 0;
        int count = 0;
        while (sentences[i][j] != '\0')
        {
            if (sentences[i][j] == ' ')
                count++;
            j++;
        }
        count++;
        if (count > max)
        {
            max = count;
        }
        i++;
    }
    return (max);
}
