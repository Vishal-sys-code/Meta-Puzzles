## ABCs

Given three integers A, B, and C, determine their sum. <br/>
Your task is to implement the function getSum(A, B, C) which returns the sum A + B + C. <br/>

**Constraints:** <br/>
1 <= A, B, C <= 100 <br/>

**Sample test case #1**
```
A = 1
B = 2
C = 3
```
```
Expected Return Value = 6
```
<br/>

**Sample test case #2**
```
A = 100
B = 100
C = 100
```
```
Expected Return Value = 300
```
<br/>

**Sample test case #3**
```
A = 85
B = 16
C = 93
```
```
Expected Return Value = 194
```
<br/>

**Sample Explanation**<br/>
In the first case, <br/>
 A + B + C = 1 + 2 + 3 = 6

<hr>

## All Wrong

There's a multiple-choice test with N questions, numbered from 1 to N. Each question has 2 answer options, labelled A and B. You know that the correct answer for the ith question is the ith character in the string C, which is either "A" or "B", but you want to get a score of 0 on this test by answering every question incorrectly.  <br/>

Your task is to implement the function getWrongAnswers(N, C) which returns a string with N characters, the ith of which is the answer you should give for question i in order to get it wrong (either "A" or "B"). <br/>

**Constraints:** <br/>
 1 ≤ N ≤ 100 <br/>
​
 C<sub>i</sub> ∈{'A','B'}

**Sample test case #1**
```
N = 3
C = ABA
```
```
Expected Return Value = BAB
```

**Sample test case #2**
```
N = 5
C = BBBBB
```
```
Expected Return Value = AAAAA
```

**Sample Explanation:**<br/>
In the first case the correct answers to the 3 questions are A, B, and A, in that order. Therefore, in order to get them all wrong, the 3 answers you should give are B, A, and B, in that order. <br/>

In the second case the correct answers are all B, so you should answer each question with A. <br/>

<hr>