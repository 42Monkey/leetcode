char* reverseOnlyLetters(char* s) {
    int i = 0;
    int left = 0;
    int right = 0;
    char temp;

    while (s[i] != '\0')
        i++;
    right = i - 1;

    while (left < right)
    {
        while (left < right && !(s[left] >= 'A' && s[left] <= 'Z') && !(s[left] >= 'a' && s[left] <= 'z'))
            left++;
        while (left < right && !(s[right] >= 'A' && s[right] <= 'Z') && !(s[right] >= 'a' && s[right] <= 'z'))
            right--;
        
        if (left < right)
        {
            temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
    return (s);
}
