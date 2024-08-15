# Problem statement
## Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.

Given 'N', print the corresponding pattern.

```
Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 20
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
1         1
1 2     2 1
1 2 3 3 2 1
Sample Input 2 :
4
Sample Output 2 :
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
Sample Input 3 :
7
Sample Output 3 :
1                         1
1 2                     2 1
1 2 3                 3 2 1
1 2 3 4             4 3 2 1
1 2 3 4 5         5 4 3 2 1
1 2 3 4 5 6     6 5 4 3 2 1
1 2 3 4 5 6 7 7 6 5 4 3 2 1  
```


```cpp
void numberCrown(int n) {
    // Write your code here.
    for (int i = 1; i<=n; i++) {
      for (int j = 1; j <=i; j++) {
          cout<<j<<" ";
      }
      for (int j = 0; j < 2*(n-i); j++) {
          cout<<" ";
      }
      for (int j = i; j > 0; j--) {
          cout<<j<<" ";
      }
      cout<<endl;

    }
}

```



## Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

```
Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
    A
  A B A
A B C B A
Sample Input 2 :
1
Sample Output 2 :
A

```

```cpp
void alphaHill(int n) {
    // Write your code here.
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <n-i-1; j++) {
          cout<<" ";
      }

      char ch='A';
      int breakPOint = (2*i+1)/2;

      for (int j=1; j<=2*i+1; j++) {
          cout<<ch<<" ";
          if(j<=breakPOint) ch++;
          else ch--;
      }
      for (int j = 0; j <n-i-1; j++) {
          cout<<" ";
      }
      cout<<endl;
    }
}

```