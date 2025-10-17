# Module - 3

### Loop

`Module Overview`

-   Mastering Loops in C Programming
    -   Loops are fundamental programming constructs that enable us to execute a block of code repeatedly.
-   Understanding Loops: The Fundamental Concepts
    -   What is a Loop?
        -   A loop is a pprogramming construct that repeats a block of statements untill a specified condition is met. It eliminates the need to write the same code multiple times, making programs more efficient and readable.
    -   Why use Loops?
        -   Loops enable programmers to automate repeatitive tasks, process collections of data, and implement algorithms that require iteration. They are essential for tasks like array manipulation, data processing, and mathematical computation.
    -   Loop Components
        -   Every loop has initialization(starting value), condition(when to continue), and update(how values change between iterations). Understanding these components is crucial for creating effective loops.
-   When approaching loops, think of them as automated repeaters that execute code until specific criteria are met.

-   For Loops: Precision Iteration
    -   Syntax Structure
        -   for(initialization; condition; increment/decrement) {statements;}
    -   Execution Flow
        -   Initialize counter -> Check condition -> Execute statements -> Update counter -> Repeat
    -   Use Cases
        -   Array traversal, fixed-count iterations, and structured repetitive tasks
    -   Best Practices
        -   Keep loop bodies simple, avoid modifying loop variables inside the loop, use clear variable names
-   For loops are ideal when we know exactly how many times we need to execute a block of code. Their compact structure makes them perfect for array traversal, counting operation, and any scenario where the numbers of iterations can be determined beforehand.

-   While and Do-While Loops: Condition Driven Iteration
    -   While Loop
        -   Checks the conditions first, then executes the code block if the condition is true.
        -   Syntax: while(condition) {statements}
        -   May executes 0 times if the condition is initially false.
    -   Do-While Loop
        -   Executes the code block first, then checks the condition.
        -   Syntax: do{statements} while(condition);
    -   Always executes at least once, even if the condition is initially false.
-   The key difference between these two loops is when the condition is evaluated. While loops are perfect for scenarios where we might skip execution entirely based on the initial condition. Do-while loops are ideal when we need to ensure that the code block executes at least once before checking the condition.

-   Conditional Loops and Control Statements
    -   Conditional Loop Logic
        -   Combining loops with if-else statements creates powerful control structures that can make decisions during each iteration, allowing for complex algorithimic behaviors and data processing.
    -   Break Statement
        -   The break statement immediately terminates loop execution, transferring control to the statement following the loop. It's essential for early exit conditions when a particular criterion is met.
    -   Continue Statement
        -   The continue statement skips the current iteration and proceeds to the next one. It's useful for filtering operations where some iterations should be ignored based on certain conditions.
-   Consider a scenario where we need to find the first prime number greater than 100. We could use a loop with a break statement which will break the loop once we find it. Similarly, when processing a list of numbers, we might use continue to skip negative values.

-   These control statements provide fine-grained control over loop execution, making our code more efficient, and are essential tools for implementing complex algorithms and handling execptional cases.

-   Avoiding and Handling Infinite Loops
    -   Recognizing Infinite Loops
        -   Missing incremwnt/update statements or incorrect conditions
    -   Prevention Techniques
        -   Proper initialization, valid conditions, and reliable update expressions
    -   Emergency Handling
        -   Force termination(ctrl+c) and debugger breakpoints
-   Infinite loops occur when the loop condition never evaluates to false. This can happen when the loop variable is not properly updated or when the condition logic is flawed. Common causes include using the assignment operator(=) instead of the equality operator(==) in conditions, or forgetting to incrementt/decrement counters.

-   To safegouard against infinite loops, always ensure there's a clear path for loop to terminate. Consider adding safety mechanism like iteration count or timeout for critical code. Testing with boundary conditions can also help identify potential infinite loop scenarios before they cause problems in production.

`What is Loop`

-   Loop - ঘুরপাক খাওয়া
-   Loop - প্রোগ্রামিং এর ভাষায়, একই কাজ বার বা করাই হচ্ছে Loop

`For Loop`

-   if এর paranthesis () এর মধ্যে যেমন condition থাকে, তেমনি for এর paranthesis () এর মধ্যে যেমন control থাকে।
-   এই control syntax ৩ ভাগে বিভক্ত। প্রতিটা ভাগ semicolon(;) দ্বারা separated।
-   for(initialization; condition; increment/decrement) {statements;}
-   for loop কে control করার জন্য যেকোনো একটা variable নিতে হয়। এই variable counting এর জন্য ব্যাবহার করা হয়।
-   = দ্বারা assign করা বোঝায়।
-   `assign মানে হচ্ছে দান পাশের value কে বাম পাশের variable এ store করে রাখা।`

-   Loop কে control করার দুটি statement হচ্ছে break and continue.

`Break Statement`

-   Loop কে মাঝপথে থামিয়ে দেয়ার ক্ষেত্রে কাজে লাগে।
-   Break অবশ্যই loop এর ভিতরে লিখতে হবে।

`Continue Statement`

-   Loop এর ভিতর specific কোন condition এ কোন specific value কে skip করে।
-   Continue অবশ্যই loop এর ভিতরে লিখতে হবে।

`While Loop`

-   For loop দিয়ে যা করা যায় while loop দিয়ে সেই সব কাজই করা যায়।
-   While loop এর condition এর মধ্যে for loop এর শুধু মাঝের condition(end condition) টা থাকে।
-   Initialization while loop শুরু হওয়ার আগে যেকোনো এক জায়গায় থাকবে।
-   Increment/Decrement while loop এর ভিতরে / শেষে থাকবে।

`Do-While Loop`

-   do{statement} while(end condition)
-   Initialization do-while loop শুরু হওয়ার আগে যেকোনো এক জায়গায় থাকবে।
-   Increment/Decrement do-while loop এর ভিতরে / শেষে থাকবে।
-   At least minimum ১ বার statement run হবে, condition initially মিথ্যা হওয়া সত্ত্বেও।

`Avoid Infinity Loop`

-   ctrl+c দ্বারা infinite loop কে off করা যায়।

# Quiz of Module - 3

1. Which loop did we learn today?

-   for, while, do while

2. For the following loop, how many times will “hi” be printed?

```c
for(int j=5; j<=10; j++){
    printf("hi ");
}
```

-   6

3. For the following loop, how many times will “hi” be printed?

```c
for(int j=5; j<=10; j++){
    printf("hi ");
    j++;
}
```

- 3

4. What will be the output of the following code?

```c
int main(){
    int i = 0, j = 0;
    for(int j = 1; j <= 5; j++){
        i++;
    }
    printf("%d", j);
}
```
- 6

5. What will be the output of the following code?
```c
int main(){
    for(int i = 0; i <= 10; i++){
        int x = 4;
    }
    printf("%d", i);
}
```
- Error

6. What will be the output of the following code?
```c
int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
    }while(i < 5);
}
```
- 1 2 3 4

7. How many times “hello” will be printed?
```c
int main(){
    int i = -5;
    while(i < 3){
        printf("hello ");
        i += 2;
    }
}
```
- 4

8. For which statement there will be an infinite loop?
- for(int i = -3; i >= -10; i++)

9. Which of the below loop will give the same values of i in reverse order for the loop?
```c
for(int i = 0; i < n; i++)
```
- for(int i = n - 1; i < 0; i--)

10. What will be the output of the following code?
```c
int main(){
    int i = 5;
    while(i < 10){
        printf("i");
        i++;
    }
}
```
- None of these above


# Quiz Explanation of Module - 3
```c
1. Which loop did we learn today?
   A) for
   B) while
   C) do while
   D) All of the above.
Explanation: আজকে আমরা C প্রোগ্রামিং এর for, while, এবং do while লুপ শিখেছি। সবগুলো লুপ এর কাজ একই কিন্তু সিনট্যাক্সের পার্থক্য রয়েছে।


2. For the following loop, how many times will “hi” be printed?
for(int j=5;j<=10;j++)
{
     printf("hi ");
}

   A) 5
   B) 6
   C) 9
   D) 10
Explanation: লুপটি j=5 থেকে j=10 পর্যন্ত চলবে (৫,৬,৭,৮,৯,১০ - মোট ৬ বার)। তাই "hi" ৬ বার প্রিন্ট হবে।


3. For the following loop, how many times will “hi” be printed?
for(int j=5;j<=10;j++)
{
     printf("hi ");
     j++;
}

   A) 2
   B) 3
   C) 4
   D) none of the above
  
Explanation: লুপে j এর মান ৫ থেকে শুরু হয়ে প্রতিবার ২ করে বাড়ে (একবার লুপের j++ স্টেপে এবং একবার for কোড ব্লকের ভিতরের j++ স্টেটমেন্টে)। লুপটি চলবে যখন j=5,7,9 (মোট ৩ বার) এবং j=11 এ গিয়ে লুপ থেমে যাবে।




4. What will be the output of the following code?
int main()
{
    int i=0,j=0;
    for(j=1;j<=5;j++)
    {
        i++;
    }
    printf("%d",j);
}

   A) 1
   B) 0
   C) 5
   D) 6
Explanation: লুপের শর্ত j=1 থেকে j<=5 পর্যন্ত চলবে (প্রতি স্টেপে 1 করে বৃদ্ধি হবে)। লুপটি j=5 পর্যন্ত চলার পর j++ হওয়ায় j-এর মান ৬ হয় (কারণ j=6 হলে শর্ত j<=5 মিথ্যা হয়, তাই লুপ বন্ধ হয়)। তাই, কোডের শেষ লাইন printf("%d", j) → 6 প্রিন্ট করবে।

5. What will be the output of the following code?
int main()
{
    for(int i=0;i<=10;i++)
    {
        int x = 4;
    }
    printf("%d",i);
}

   A) 10
   B) 11
   C) 0
   D) Error
Explanation:  i ডিক্লেয়ার করা হয়েছে for লুপের ভিতরে। তাই এটি শুধু লুপের ভিতরেই একসেসিবল। প্রিন্ট স্টেটমেন্ট printf("%d",i) এ i অ্যাক্সেস করতে গেলে কম্পাইলার এরর হবে, কারণ i এখানে undefined।








6. What will be the output of the following code?
int main()
{
    int i = 1;
    do
    {
        printf("%d ",i);
        i++;
    } while (i<5);
}

   A) 1 2 3 4
   B) 1 2 3 4 5
   C) 2 3 4 5
   D) No output
Explanation: do-while লুপ অন্তত একবার কোড এক্সিকিউট করে, তারপর কন্ডিশন চেক করে। i=1 থেকে শুরু করে i<5 পর্যন্ত (i=4 পর্যন্ত) প্রিন্ট হবে। i=5 হলে কন্ডিশন i<5 মিথ্যা হয়, তাই লুপ বন্ধ হয়।

7. How many times “hello” will be printed?
int main()
{
    int i = -5;
    while(i<3)
    {
        printf("hello ");
        i+=2;
    }
}
   (A) 3
   B) 4
   C) 5
   D) 8
Explanation: i এর শুরুর মান -5 এবং লুপ চলবে যতক্ষণ i<3 থাকে । প্রতি ধাপে i এর মান 2 করে বাড়ে। i এর মান -৫ থেকে শুরু হয়ে ২ করে বাড়ে এবং i এর সম্ভাব্য মান -৫, -৩, -১, ১ এর জন্য ৪ বার "hello" প্রিন্ট করে। i এর মান ৩ এ গিয়ে লুপ বন্ধ হয়।
  
8. For which statement there will be an infinite loop?

   A) for(int i=5; i>=10; i--)
   B) for(int i=5; i>=10; i++)
   C) for(int i=-5; i>=-10; i--)
   D) for(int i=-3; i>=-10; i++)
Explanation: for(int i=-3; i>=-10; i++) এই লুপে i এর মান -3 থেকে শুরু হয়ে প্রতি স্টেপে 1 করে ক্রমাগত বাড়তে থাকবে, কিন্তু শর্ত i>=-10 কখনই মিথ্যা হবে না (কারণ i সর্বদা -10 এর চেয়ে বড় থাকবে)। ফলে এটি একটি ইনফিনিটি লুপ তৈরি করবে।

9. Which of the below loop will give the same values of i in reverse order for the loop? 
    for(int i=0;i<n;i++)
 
    A) for(int i=n; i>0; i--)
    B) for(int i=n+1; i>=0; i++)
    C) for(int i=n-1; i>=0; i--)
    D) for(int i=n-1; i>0; i--)
Explanation: for(int i=n-1; i>=0; i--) এই লুপটি i এর মান n-1 থেকে শুরু করে 0 পর্যন্ত প্রিন্ট করে। যা মূলত লুপের (i=0 থেকে i<n) মানগুলির ঠিক reverse order প্রিন্ট করে।
    
10. What will be the output of the following code?
int main()
{
    int i = 5;
    while(i<10)
    {
        printf("i");
        i++;
    }
}
    A) 5 6 7 8 9
    B) 5 6 7 8 9 10
    C) 6 7 8 9
    D) None of the above.
Explanation: প্রোগ্রামটি i এর মান প্রিন্ট করে না, বরং "i" স্ট্রিংটি প্রিন্ট করে। লুপটি i=5 থেকে i=9 পর্যন্ত (৫ বার) চলবে। তাই আউটপুট হবে: i i i i i    



```

# Extra Practice Problem of Module - 3

1. Write a c program to print 8’s time table to 200.
```c
#include<stdio.h>
int main(){

    for(int i = 8; i <= 200; i +=8){
        printf("%d\n", i);
    }
    return 0;
}
```

2. Write a c program to print all odd number from 100 to 1.
```c
#include<stdio.h>

int main(){
    for(int i = 100; i >= 0; i--){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    // for(int i = 99; i > 0; i -= 2){
    //     printf("%d\n", i);
    // }
    return 0;
}
```

3. Write the differences between break and continue
- Here are the **differences between `break` and `continue`** in C:

1. **Purpose:**

   * `break` ends the **entire loop or switch** immediately.
   * `continue` skips the **current iteration** and moves to the next one.

2. **Effect on Loop:**

   * `break` **terminates** the loop execution.
   * `continue` **jumps back** to the loop condition for the next iteration.

3. **Usage:**

   * `break` is used when we want to **exit** a loop based on a condition.
   * `continue` is used when we want to **skip specific cases** but keep looping.

4. **Common Placement:**

   * `break` is often used with **switch** and **loops**.
   * `continue` is used **only inside loops**.


