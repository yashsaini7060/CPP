# Palindrome

```cpp
class Solution {
public:
    bool isPalindrome(int n) {
        int a=n, pal=0;
        if(n<0) return false;
        while (a != 0) {
            if(pal>INT_MAX/10){
            return 0;
            }
            pal= pal*10 + a%10;
            a=a/10;
        }
        if(n==pal) return true;
        return false;
    }
};
```

# Print all Divisors of a number

```
If n=36

Its factors

1 X 36
2 X 18
3 X 12
4 X 9
6 X 6
9 X 4
12 X 3
18 X 2
36 X 1

From the above we ca conclude that after the square root of n the values are repeate


|  1 X 36  |
|  2 X 18  |
|  3 X 12  |
|  4 X 9   |
|  6 X 6   |
____________
|  9 X 4   |
|  12 X 3  |
|  18 X 2  |
|  36 X 1  |
```

```cpp

void printDivisors(int n){
    vector<int> ls;
    for(int i = 1; i<= sqrt(n); j++) {
        if (n % i == 0) {
            ls.push_back(i);
            if ((n/i) !=i) {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<<it<<" ";
}
//TC: O(sqrt(n))

// sqrt function takes time so we can change that like this in for loop condition

// i<=sqrt(n) ==> i*i<=n
//above we have transfered square root to other side and it became square of i

// New code

void printDivisors(int n){
    vector<int> ls;
    for(int i = 1; i*i<=n; j++) {
        if (n % i == 0) {
            ls.push_back(i);
            if ((n/i) !=i) {
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<<it<<" ";
}


//TC: O(sqrt(n))

```


# Sum of all divisors
[Coding Ninjas Link ](https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEMg)
[GFG Link](https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1)
```
Problem statement
You are given an integer ‘n’.



Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.



Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.



Example:
Input: ‘n’  = 5

Output: 21

Explanation:
We need to find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to 5. 
‘sumOfDivisors(1)’ = 1
‘sumOfDivisors(2)’ = 2 + 1 = 3
‘sumOfDivisors(3)’ = 3 + 1 = 4
‘sumOfDivisors(4)’ = 4 + 2 +1 = 7 
‘sumOfDivisors(5)’ = 5 + 1 = 6
Therefore our answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) + sumOfDivisors(4) + sumOfDivisors(5) = 1 + 3 + 4 + 7 + 6 = 21.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3


Sample Output 1:
8


Explanation of sample output 1:
We need to find sumOfDivisors(1) + sumOfDivisors(2) +sumOfDivisors(3).
sumOfDivisors(1) = 1
sumOfDivisors(2) = 2 + 1 = 3
sumOfDivisors(3) = 3 + 1 = 4
Therefore, the answer is sumOfDivisors(1) + sumOfDivisors(2) + sumOfDivisors(3) = 1 + 3 + 4 = 8. 

Sample Input 2:
10


Sample Output 2:
87


Expected Time Complexity:
Try to solve this in O(sqrt(‘n’)).


Constraints:
1 <= ‘n’ <= 3*10^4

Time Limit: 1 sec
```

## Explaination

```
For N=6

1 ==> 1 
2 ==> 1 2
3 ==> 1   3
4 ==> 1 2    4  
5 ==> 1        5
6 ==> 1 2 3      6

Total => 33



Number(i)     Count
1              6
2              3
3              2
4              1
5              1
6              1


From the above number and count relation we can conclude

count is comming by N/i

eg =>
6/1  ==> 6  
6/2  ==> 3
6/3  ==> 2
6/4  ==> 1
6/5  ==> 1
6/6  ==> 1
``` 

```cpp
int sumOfAllDivisors(int n){
	// Write your code here.

   int ans = 0;

    // Iterating over all 'i'. Each 'i' contributes to final answer
    // exactly 'floor(n/i)' times.
    for (int i = 1; i <= n; i++)
    {
        ans += i * (n / i);
    }

    return ans;
}
```
