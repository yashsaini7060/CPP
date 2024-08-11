# Pass by Reference

When we passes variable to the function to call it will be pass by value means that the copy of that variable is passed to the function.

But with array its not like this by default it will pass the address of the first element of the variable to the function;

If we have to use pass by reference with some normal value we have to ass & sign before the variable name in the function eg.


```c++
#include <bits/stdc++.h>
using namespace std;

int demo (int &age){
  age+=5;
  return 0;
}

int main () {

  int age = 18;
  cout<<"before changing value of age:"<<age<<endl;
  demo(age);
  cout<<"after changing value of age:"<<age;
  //output will be 20
  return 0;
}


```


# Including all the cpp stl libraries

```c++
#include <bits/stdc++.h>
```