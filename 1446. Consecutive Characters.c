int maxPower(char* s) {
    int i = 0;
    int j = 1;
    int counter = 1;

    while (s[i] != '\0')
    {
        if (s[i] == s[i + 1])
        {
            j++;
        }
        else
        {
            j = 1;
        }

        if (j > counter)
        {
            counter = j;
        }
        i++;
    }
    return (counter);
}
