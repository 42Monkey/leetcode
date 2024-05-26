int finalValueAfterOperations(char** operations, int operationsSize) {
    int i = 0;
    int x = 0;

    while (i < operationsSize)
    {
        char c = operations[i][1];
        if (c == '+')
            x += 1;
        else
            x -= 1;
        i++;
    }
    return (x);
}
