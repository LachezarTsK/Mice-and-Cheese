
#include <queue>
#include <vector>
using namespace std;

class Solution {
    
public:
    int miceAndCheese(const vector<int>& firstReward, const vector<int>& seondReward, int numberOfTypesOfCheeseForFirstMouse) const {

        int maximumPoints = 0;
        const int totalTypesOfCheese = firstReward.size();
        
        //It is recommended to always use transparent operators (greater<> instead of greater<typename>, etc) 
        //by Standard Library Containers that accept a comparator type. 
        //It certain cases, performance could be better than with non-transparent comparators.
        priority_queue<int, vector<int>, greater<>> minHeapDifferenceInRewards;

        for (int i = 0; i < totalTypesOfCheese; ++i) {
            maximumPoints += firstReward[i];
            minHeapDifferenceInRewards.push(firstReward[i] - seondReward[i]);
            if (minHeapDifferenceInRewards.size() > numberOfTypesOfCheeseForFirstMouse) {
                maximumPoints -= minHeapDifferenceInRewards.top();
                minHeapDifferenceInRewards.pop();
            }
        }

        return maximumPoints;
    }
};
