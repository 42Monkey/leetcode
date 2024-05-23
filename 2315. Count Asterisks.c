int countAsterisks(char* s) {
    int i = 0; // index
    int j = 0; // counter
    int flag = 1; // flag

    while (s[i] != '\0')
    {
        if (s[i] == '|')
        {
            flag = !flag;
        }
        if (s[i] == '*' && flag)
        {
            j++;
        }
        i++;
    }
    return (j);
}
