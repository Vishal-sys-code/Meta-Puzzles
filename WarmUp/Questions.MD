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

## Battleship

You're playing Battleship on a grid of cells with R rows and C columns. There are 0 or more battleships on the grid, each occupying a single distinct cell. The cell in the ith row from the top and jth column from the left either contains a battleship (G<sub>{i,j}</sub> = 1) or doesn't (G<sub>{i,j}</sub> = 0).
<br/>

You're going to fire a single shot at a random cell in the grid. You'll choose this cell uniformly at random from the R*C possible cells. You're interested in the probability that the cell hit by your shot contains a battleship.

<br/>
Your task is to implement the function getHitProbability(R, C, G) which returns this probability.

<br/>
Note: Your return value must have an absolute or relative error of at most 10<sup>−6</sup> to be considered correct.

<br/>

**Constraints:** <br/>
1 ≤ R,C ≤ 100 <br/>
G<sub>{i,j}</sub> ≤ 1

<br/>

**Sample test case #1**
```
R = 2
C = 3
G = 0 0 1
    1 0 1
```
```
Expected Return Value = 0.50000000
```

**Sample test case #2**
```
R = 2
C = 2
G = 1 1
    1 1
```
```
Expected Return Value = 1.00000000
```

**Sample Explanation :** <br>
In the first case, 3 of the 6 cells in the grid contain battleships. Therefore, the probability that your shot will hit one of them is 3/6 = 0.5. <br/>

In the second case, all 4 cells contain battleships, resulting in a probability of 1.0 of hitting a battleship.

<br>

<hr>
