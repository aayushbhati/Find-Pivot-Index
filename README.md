# Find Pivot Index

## Problem Description

Given an array of integers `nums`, calculate the **pivot index** of this array.

The **pivot index** is the index where the **sum of all the numbers strictly to the left** of the index is **equal** to the **sum of all the numbers strictly to the right** of the index.

If the index is on the **left edge** of the array, then the left sum is `0` because there are no elements to the left.  
This also applies to the **right edge** of the array.

Return the **leftmost** pivot index. If no such index exists, return `-1`.

## Examples

### Example 1:
**Input:**  
`nums = [1,7,3,6,5,6]`  
**Output:**  
`3`  

**Explanation:**  
- Left sum = `1 + 7 + 3 = 11`  
- Right sum = `5 + 6 = 11`  
- Index `3` is the pivot index.

---

### Example 2:
**Input:**  
`nums = [1,2,3]`  
**Output:**  
`-1`  

**Explanation:**  
There is no index that satisfies the pivot condition.

---

### Example 3:
**Input:**  
`nums = [2,1,-1]`  
**Output:**  
`0`  

**Explanation:**  
- Left sum = `0`  
- Right sum = `1 + (-1) = 0`  
- Index `0` is the pivot index.

---

## Constraints
- `1 <= nums.length <= 10⁴`
- `-1000 <= nums[i] <= 1000`
