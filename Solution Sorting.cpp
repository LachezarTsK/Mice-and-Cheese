
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    int miceAndCheese(const vector<int>& firstReward, const vector<int>& seondReward, int numberOfTypesOfCheeseForFirstMouse) const {
       
        int maximumPoints = 0;
        const int totalTypesOfCheese = firstReward.size();
        vector<int> differenceInRewards(totalTypesOfCheese);

        for (int i = 0; i < totalTypesOfCheese; ++i) {
            differenceInRewards[i] = firstReward[i] - seondReward[i];
            maximumPoints += seondReward[i];
        }
        //C++20: std::ranges::sort(differenceInRewards);
        sort(differenceInRewards.begin(), differenceInRewards.end());

        for (int i = totalTypesOfCheese - 1; i > totalTypesOfCheese - numberOfTypesOfCheeseForFirstMouse - 1; --i) {
            maximumPoints += differenceInRewards[i];
        }

        return maximumPoints;
    }
};
