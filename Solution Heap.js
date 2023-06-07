
/**
 * @param {number[]} firstReward
 * @param {number[]} seondReward
 * @param {number} numberOfTypesOfCheeseForFirstMouse
 * @return {number}
 */
var miceAndCheese = function (firstReward, seondReward, numberOfTypesOfCheeseForFirstMouse) {

    let maximumPoints = 0;
    const totalTypesOfCheese = firstReward.length;
    //const {MinPriorityQueue} = require('@datastructures-js/priority-queue');
    //MinPriorityQueue<number>
    const minHeapDifferenceInRewards = new MinPriorityQueue({compare: (x, y) => x - y});

    for (let i = 0; i < totalTypesOfCheese; ++i) {
        maximumPoints += firstReward[i];
        minHeapDifferenceInRewards.enqueue(firstReward[i] - seondReward[i]);
        if (minHeapDifferenceInRewards.size() > numberOfTypesOfCheeseForFirstMouse) {
            maximumPoints -= minHeapDifferenceInRewards.dequeue();
        }
    }

    return maximumPoints;
};
