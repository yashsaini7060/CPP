# Reverse Integer


## Medium

## Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

## Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 
```
Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
```

```cpp
class Solution {
public:
    int reverse(int x) {
       int ans = 0;
       while(x!=0){
        //Checking if the value of ans is greater then value of integer or lesser then integer value so
        // here ans is calcultes like ans*10 so ans value increase so
        // ans*10>INT_MAX 
        // ans>(INT_MAX)/10   (MOVING 10 FROM LEFT SIDE TO RIGHT)
        //SIMILARLY ans<(INT_MIN)/10
        //if any condition is true return 0;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
        return 0;
        }
        ans = ans*10 + x%10;
        x=x/10;

       }
       return ans;
    }
};

```
