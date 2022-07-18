/**
 * @param {number[]} nums
 * @return {number}
 */

var findNumbers = function (nums) {
    let counter = 0;
    for (let i = 0; i <= nums.length-1; i++) {
        (nums[i].toString().length % 2 === 0) ? counter+=1 : null;

    }
    return counter;
};
