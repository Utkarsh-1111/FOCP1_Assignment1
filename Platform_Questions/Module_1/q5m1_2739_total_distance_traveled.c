int distanceTraveled(int mainTank, int additionalTank)
{
    int distance = 0;
    while(mainTank >= 5 && additionalTank > 0)
    {
        mainTank -= 4;
        additionalTank--;
    }
    distance = mainTank * 10;
    return distance;
}
