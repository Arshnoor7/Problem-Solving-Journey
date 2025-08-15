# Pattern 5 - Inverted Star Triangle

## 📜 Problem Statement
Geek loves patterns. Given an integer `n`, print an inverted triangle star pattern where the first row contains `n` stars and each subsequent row contains one star less.

---

<img width="497" height="823" alt="image" src="https://github.com/user-attachments/assets/5d9659ff-1298-46be-9f57-682602c990bc" />

---

## 🚀 Approach
- Use **two nested loops**:
  1. Outer loop runs `n` times (for rows).
  2. Inner loop runs decreasingly from `i` stars down to 1.
- Print a space between stars except after the last star in a row.
- Print a newline after each row.

---

## ⏱ Time Complexity
- **O(n²)** – because we use two nested loops to print all characters.

## 📦 Space Complexity
- **O(1)** – no extra memory is used apart from loop counters.

---

## 🔗 Constraints
- `1 ≤ n ≤ 100`

---

## 🖋 Author
- **Name:** Arshnoor
- **Date:** 15 August 2025
