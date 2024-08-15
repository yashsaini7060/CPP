# Problem statement
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