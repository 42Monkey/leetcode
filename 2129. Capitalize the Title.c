char* capitalizeTitle(char* title) {
    int i = 0;
    int j = 0;
    int index_word = 0;
    int length = 0;

    while (title[i] != '\0')
    {
        if (title[i] >= 'A' && title[i] <= 'Z')
        {
            title[i] += 32;
        }
        i++;
    }

    if (title[0] >= 'a' && title[0] <= 'z')
    {
        title[0] -= 32;
    }

    i = 0;
    while (title[i] != '\0')
    {
        if (title[i] == ' ')
        {
            if (title[i + 1] >= 'a' && title[i + 1] <= 'z')
                title[i + 1] -= 32;
        }
        i++;
    }

    i = 0;
    while (title[i] != '\0')
    {
        if (i == 0 || title[i] == ' ') {
            if (i == 0)
                index_word = i;
            else
                index_word = i + 1;
        }
        length = 0;
        while (title[index_word + length] != ' ' && title[index_word + length] != '\0')
            length++;
        if (length < 3) {
            j = 0;
            while (j < length)
            {
                if (title[index_word + j] >= 'A' && title[index_word + j] <= 'Z')
                    title[index_word + j] += 32;
                j++;
            }
        }
        i++;
   }
    return (title);
}
