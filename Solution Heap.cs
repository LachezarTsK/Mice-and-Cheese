
using System;
using System.Collections.Generic;

public class Solution
{
    public int MiceAndCheese(int[] firstReward, int[] seondReward, int numberOfTypesOfCheeseForFirstMouse)
    {
        int maximumPoints = 0;
        int totalTypesOfCheese = firstReward.Length;
        PriorityQueue<int, int> minHeapDifferenceInRewards = new PriorityQueue<int, int>();

        for (int i = 0; i < totalTypesOfCheese; ++i)
        {
            maximumPoints += firstReward[i];
            minHeapDifferenceInRewards.Enqueue(firstReward[i] - seondReward[i], firstReward[i] - seondReward[i]);
            if (minHeapDifferenceInRewards.Count > numberOfTypesOfCheeseForFirstMouse)
            {
                maximumPoints -= minHeapDifferenceInRewards.Dequeue();
            }
        }

        return maximumPoints;
    }
}
