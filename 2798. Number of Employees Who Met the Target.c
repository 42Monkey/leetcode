int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target){
    int i = 0;
    int counter = 0;

    while (i < hoursSize)
    {
        if (hours[i] >= target)
        {
            counter++;
        }
        i++;
    }
    return (counter);
}
