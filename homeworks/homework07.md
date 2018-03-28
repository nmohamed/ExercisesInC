## Homework 7

### C Exercises

Modify the link below so it points to the `ex07` directory in your
student repository.

[Here is a link to the ex07 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex07)

### Think OS Chapter 7 reading questions

### Caching

1) What happens if a program writes a new value into the program counter?

The flow of execution jumps to another location in the program (for jumping/branching type instructions)

2) What is the fundamental problem caches are meant to solve?

Memory bottleneck - it increases the speed of your computer by making reading from memory take less time.

3) If cache access time is 1 ns and memory access time is 10 ns, what is the average
access time of a program with hit rate 50%?  How about 90%?

1 * .5 + .5 * 10 = 5.5 ns

1 * .9 + .1 * 10 = 1.9 ns

4) The book gives several examples of programming language features, like loops, that tend
to improve locality in the access pattern of instructions and/or data.  Can you think of other examples?  
Or counter-examples that might decrease locality?

Accessing every element in an array would improve locality. A way to decrease locality would be by allocating multiple arrays filled with data, where you only access a single element in each array.

5)  If you refactor a program to improve locality, would you say the program is "cache aware"?  Why not?

No, since you should be refactoring it accordingly in reference to the hardware (it should be specific to the architecture you're using)

6) See if you can estimate the cost of a memory cache by comparing the prices of two similar CPUs with
different cache sizes.

https://www.newegg.com/Product/Product.aspx?Item=N82E16819117795
 -> $999.99, 13.75 MB L3 cache

https://www.newegg.com/Product/Product.aspx?Item=N82E16819117811
 -> $1,101.20, 16.5 MB L3 cache

2.75MB for $101.21 more, or $36.94 per MB

7) Why are cache policies generally more complex at the bottom of the memory hierarchy?

There is more time to make decisions and well-designed policies can make a big difference, so they are more complex.

8) Can you think of a strategy operating systems could use to avoid thrashing or recover when it occurs?

Systems can detect an increase in paging, in order to react appropriately. Or, let processes run for a certain amount of time before pages become evicted so the rate of thrashing slows down.
