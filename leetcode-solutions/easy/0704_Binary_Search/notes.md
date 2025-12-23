Problem : 704 - Binary Search

Leetcode : https://leetcode.com/problems/binary-search/

Intuition - 

If an array is sorted, we can discard half of it at every step.

Instead of checking elements one by one (linear search), binary search:

    - Looks at the middle element.

    - Decide which half can contain the answer.
    
    - Search in that half only.

Approach - 

Initialize pointers -

    start = 0

    end = n - 1

Repeat while (start <= end)

Find middle index

    midIndex= start + (end - start) / 2  
    (Why? Because it prevents integer overflow when low and high are large.)


Compare -

Case 1 : If arr[mid] == target → found

Case 2 : If arr[mid] < target → search right half

    start = midIndex+ 1


Case 3 : If arr[mid] > target → search left half

    end = midIndex- 1


If loop ends → element not present

Time Complexity : O(log n)

Space Complexity : O(1)