
import java.util.Arrays;

public class Solution {

    public int miceAndCheese(int[] firstReward, int[] seondReward, int numberOfTypesOfCheeseForFirstMouse) {

        int maximumPoints = 0;
        final int totalTypesOfCheese = firstReward.length;
        int[] differenceInRewards = new int[totalTypesOfCheese];

        for (int i = 0; i < totalTypesOfCheese; ++i) {
            differenceInRewards[i] = firstReward[i] - seondReward[i];
            maximumPoints += seondReward[i];
        }
        Arrays.sort(differenceInRewards);

        for (int i = totalTypesOfCheese - 1; i > totalTypesOfCheese - numberOfTypesOfCheeseForFirstMouse - 1; --i) {
            maximumPoints += differenceInRewards[i];
        }

        return maximumPoints;
    }
}
