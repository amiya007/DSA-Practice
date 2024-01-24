# Basic Setup

- Before starting the DSA with this folder structure:-

  0. You can change the `tasks.json` for the differnt devices.
  1. Change the Default shell to command prompt (cmd).
  2. After write the `.cpp` code in a file; Input will be given to the `input.txt` file and output will be shown in the `output.txt` file.
  3. Change the layout for your suitability.
  4. To run the code, Press `Ctrl + Shift + B`.

# Pattern Practice

- For Pattern 9 and 10 use pattern 7 and 8.
- For pattern 15 use the pattern 13, and replace the value with "\*" and reverse the pattern

### Pattern 13

```
*****
** **
*   *
*   *
** **
*****
```

# Basic Maths

- To get the number of digits in a integer we can use `(log10(n) + 1)` and parsed it to the integer `(int) (log10(n) + 1)`
- If we find divisors of a number with a `n` times looping the TC will be `O(n)`; by taking the `√n` times looping the TC will become `O(√n)`; again if we sort the divisors the TC will become `O(√n) + O(no. of divisors X log(no. of divisors))`

# Sorting

- ## **Selection sort**
- Selection Method is to push the smallest element to the initial and keep itrating with the remaining elements in the array.
- To perform SELECTION SORT we have to follow ony 2 steps:-

  1. Select minimum.
  2. Swap with the related index.

- Complexity:-

  - Best Case - `O(n)`
  - Worst Case - <code>O(n<sup>2</sup>)</code>

- ## **Bubble sort (Normal / Recursive)**

- Bubble Method is to push the largeest element to the last by adjecent swaps and keep itrating adjecent elements in the array.

- To perform BUBBLE SORT we have to follow any 2 steps:-

  1. Swap the adjecent elements from the start and push the last element to the last.
  2. Swap with the related index.

- Complexity:-

  - Best Case - `O(n)`
  - Worst Case - <code>O(n<sup>2</sup>)</code>

- ## **Intertion sort (Normal / Recursive)**
- It takes an element and put it to its correct position. Starting from either from the first or from last.

- Complexity:-

  - Best Case - <code>O(n<sup>2</sup>)</code>
  - Worst Case - <code>O(n<sup>2</sup>)</code>

- ## **Merge sort**
- Its is a better sorting method than above methods w.r.t Time Complexity.
- In this method we have to convert the array to nearly equal to 2 half hypothetically ( Here the time complexity is `O(log(n))` ) and arrange them in a sorted way using anothe function `( here merge() )` having the time complecity of `O(n)`

- Complexity:-

  - Best Case - `O()`
  - Worst Case -`O(n log(n))`

- Space Complexity - `O(n)`

- ## **Quick sort**
