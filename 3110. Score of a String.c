int scoreOfString(char* s) {
    int i = 1;
    int score = 0;

    if (!s || s[0] == '\0')
        return (0);

    while (s[i] != '\0')
    {
        if (s[i] > s[i - 1])
            score += s[i] - s[i - 1];
        else
            score += s[i - 1] - s[i];
        i++;
    }
    return (score);
}
