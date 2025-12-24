The array is sorted, so we can use binary search to efficiently find where the target belongs.

Binary search doesn’t just help find an element — it also tells us where an element should be if it doesn’t exist.

When the search ends, the start pointer naturally lands at the correct insertion position.

    start = end + 1

The loop ends when start becomes one greater than end, so start points to the correct insertion index—just after the largest value smaller than the target.

    Time Complexity: O(log n)

    Space Complexity: O(1)