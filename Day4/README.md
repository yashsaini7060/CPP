# Problem statement
## Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.


```
Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
Sample Input 2 :
1
Sample Output 2 :
* * 
* * 

```

```cpp
void symmetry(int n) {
    // Write your code here.
    int spaces=0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout<<"* ";
        }
        for (int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for (int j = 1; j <= n-i; j++) {
            cout<<"* ";
        }
        spaces =spaces + 2;
        cout<<endl;
    }
    spaces=2*n-2;
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=i; j++) {
            cout<<"* ";
        }
        for (int j = 0; j < spaces; j++) {
            cout<<"  ";
        }
        for (int j = 1; j <=i; j++) {
            cout<<"* ";
        }
        spaces =spaces - 2;
        cout<<endl;
    }
}

```




## Ninja has been given a task to print the required pattern and he asked for your help with the same.

You must print a matrix corresponding to the given number pattern.

```
Example:
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444

Detailed explanation ( Input/output format, Notes, Images )

Constraints :
1  <= N <= 10^2
Time Limit: 1 sec

Sample Input 1:
3

Sample Output 1:
33333
32223
32123
32223
33333

Sample Input 2 :
5

Sample Output 2 :
555555555
544444445
543333345
543222325
543212345
543222325
543333345
544444445
555555555

Sample Input 3 :
4

Sample Output 3 :
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```

```cpp
void getNumberPattern(int n) {
    // Write your code here.
    for (int i = 0; i < (2*n)-1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout<<(n- min(min(top,bottom), min(left, right)));
        }

        cout<<endl;
    }
}

```