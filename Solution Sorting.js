
/**
 * @param {number[]} firstReward
 * @param {number[]} seondReward
 * @param {number} numberOfTypesOfCheeseForFirstMouse
 * @return {number}
 */
var miceAndCheese = function (firstReward, seondReward, numberOfTypesOfCheeseForFirstMouse) {

    let maximumPoints = 0;
    const totalTypesOfCheese = firstReward.length;
    const differenceInRewards = new Array(totalTypesOfCheese);

    for (let i = 0; i < totalTypesOfCheese; ++i) {
        differenceInRewards[i] = firstReward[i] - seondReward[i];
        maximumPoints += seondReward[i];
    }
    differenceInRewards.sort((x, y) => x - y);

    for (let i = totalTypesOfCheese - 1; i > totalTypesOfCheese - numberOfTypesOfCheeseForFirstMouse - 1; --i) {
        maximumPoints += differenceInRewards[i];
    }

    return maximumPoints;
};
