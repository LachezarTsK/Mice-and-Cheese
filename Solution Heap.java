
import java.util.PriorityQueue;

public class Solution {

    public int miceAndCheese(int[] firstReward, int[] seondReward, int numberOfTypesOfCheeseForFirstMouse) {

        int maximumPoints = 0;
        final int totalTypesOfCheese = firstReward.length;
        PriorityQueue<Integer> minHeapDifferenceInRewards = new PriorityQueue<>();

        for (int i = 0; i < totalTypesOfCheese; ++i) {
            maximumPoints += firstReward[i];
            minHeapDifferenceInRewards.add(firstReward[i] - seondReward[i]);
            if (minHeapDifferenceInRewards.size() > numberOfTypesOfCheeseForFirstMouse) {
                maximumPoints -= minHeapDifferenceInRewards.poll();
            }
        }

        return maximumPoints;
    }
}
