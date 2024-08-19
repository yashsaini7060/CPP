

# GCD (Greatest Common Divisor) or HCF (Highest Common Factor)





```cpp

int gcd function(int n1, int n2){

    int gcd=1;

    for(int i=2; i<min(n1, n2); i++){
        if(n1%i == 0 && n2%i == 0){
            gcd =i;
        }
    }

    return gcd;
}

//OR


int gcd function(int n1, int n2){

    int gcd=1;

    for(int i=min(n1, n2); i>1; i--){
        if(n1%i == 0 && n2%i == 0){
            gcd =i;
            break;
        }
    }

    return gcd;
}

//TC: O(n)
```

```
Euclidean algorithm HCF

gcd(a, b) = gdc(a-b, b)

Where a>b

It will take much longer then O(n) 
Eg

a=52 b=10

gcd(52,10) => gcd(42,10) => gcd(31,10) => gcd(22,10) => gcd(12,10) => gcd(2,10) 


 => gcd(10,2) => gcd(8,2) => gcd(6,2) => gcd(4,2) => gcd(2,2) => gcd(0,2) 



 And from the above conclusoing we can go from gcd(52,10) to gcd(2,10) by 

 gcd(a,b) = gcd(a%b,b)

so geater % smaller ==> if one is 0 then the other is gcd.
 

```

``` cpp
int gcd function(int n1, int n2){

    while(a>0 && b>0){

        if(a>b) a=a%b;
        else b=b%a;
    }

    if(a==0) return b;
    return a;

}

```


# NOTE

```
a*b= LCM(a,b) * HCF(a,b)
```


















