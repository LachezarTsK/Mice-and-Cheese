
using System;

public class Solution
{
    public int MiceAndCheese(int[] firstReward, int[] seondReward, int numberOfTypesOfCheeseForFirstMouse)
    {
        int maximumPoints = 0;
        int totalTypesOfCheese = firstReward.Length;
        int[] differenceInRewards = new int[totalTypesOfCheese];

        for (int i = 0; i < totalTypesOfCheese; ++i)
        {
            differenceInRewards[i] = firstReward[i] - seondReward[i];
            maximumPoints += seondReward[i];
        }
        Array.Sort(differenceInRewards);

        for (int i = totalTypesOfCheese - 1; i > totalTypesOfCheese - numberOfTypesOfCheeseForFirstMouse - 1; --i)
        {
            maximumPoints += differenceInRewards[i];
        }

        return maximumPoints;
    }
}
