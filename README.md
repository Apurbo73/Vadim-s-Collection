### Vadim s Collection


---

### 🌟 **What is a beautiful number?**

A 10-digit number is **beautiful** if the digit at position $i$ (1-based) is at least $10 - i$.

So:

* 1st digit ≥ 9
* 2nd digit ≥ 8
* 3rd digit ≥ 7
* ...
* 10th digit ≥ 0 (which is always true)

This rule means **each digit has a minimum value it must meet depending on its position**.

---

### ✅ **What do we need to do?**

Rearrange the digits of the given number to get:

* A number that **still satisfies the "beautiful" rule**
* And is **the smallest possible number** (as if comparing integers)

---

### 🔍 **How the code works**

1. **Count how many times each digit appears** in the original number.
   Example: `9988776655` → `9:2, 8:2, 7:2, 6:2, 5:2`

2. **Go from position 1 to 10**:

   * For each position $i$, find the **smallest digit** from the available ones that is ≥ $10 - i$.
   * Once used, reduce its count (so you don’t use it again).

---

### ✏️ Example: `9988776655`

Required digits:

* Position 1 → digit ≥ 9 → choose smallest available ≥ 9 → choose **9**
* Position 2 → digit ≥ 8 → choose **8**
* Position 3 → digit ≥ 7 → choose **7**
* Position 4 → digit ≥ 6 → choose **5** (we have 2 fives)
* Position 5 → digit ≥ 5 → choose **5**
* Position 6 → digit ≥ 4 → choose **6**
* Position 7 → digit ≥ 3 → choose **6**
* Position 8 → digit ≥ 2 → choose **7**
* Position 9 → digit ≥ 1 → choose **8**
* Position 10 → digit ≥ 0 → choose **9**

Result: `9876556789` ✅ beautiful and smallest.

---

Let me know if you’d like a [step-by-step trace](f) of another example or [visual diagram](f) to make it even clearer!
