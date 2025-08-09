2. Time Complexity
Algorithm	Best Case	Why Best Case Happens	Worst Case	Why Worst Case Happens
Bubble Sort	O(n)	Already sorted → only 1 pass, no swaps. (Needs “no-swap” optimization)	O(n²)	Reverse sorted → every pass does maximum swaps.
Selection Sort	O(n²)	Always scans remaining array for min (no early exit).	O(n²)	Same reason — scanning is always O(n²).
Insertion Sort	O(n)	Already sorted → each element only compared once.	O(n²)	Reverse sorted → each insertion shifts all previous elements.

