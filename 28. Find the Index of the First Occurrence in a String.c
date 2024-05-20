int strStr(char* haystack, char* needle) 
{
    int i = 0; // haystack index

    if (needle[0] == '\0')
        return (0);
    
    while (haystack[i] != '\0')
    {
        int j = 0; // needle index
        while (haystack[i + j] == needle[j] && needle[j] != '\0')
        {
            j++;
            if (needle[j] == '\0')
            {
                return (i);
            }
        }
        i++;
    }
    return (-1);
}
