## Homework 3

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 4 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically
true about files systems but not true of their implementations.

(my answer disappeared when merging)
6 bits

2) In the UTF-16 character encoding, the binary representation of a character can take up to 32 bits.  
Ignoring the details of the encoding scheme, how many different characters can be represented?

2^^32 characters

3) What is the difference between "memory" and "storage" as defined in *Think OS*?

Memory generally refers to RAM and is presumed volatile, while storage is persistent/non-volatile

4) What is the difference between a GiB and a GB?  What is the percentage difference in their sizes?

GiB is expressed in base 2 while GB is expressed in base 10.
* 1 GiB -> 2^30
* 1 GB -> 10^9
* % difference -> 7.11%

5) How does the virtual memory system help isolate processes from each other?

If two processes generate the same virtual address they'd map to different locations in physical memory. A process can't access data from another process since there's no virtual address it can generate that maps to physical memory allocated to another process.

6) Why do you think the stack and the heap are usually located at opposite ends of the address space?

Since they both grow, if there is space between them then they both can grow until meeting each other.

7) What Python data structure would you use to represent a sparse array?

A dict of (page, offset) tuple keys mapping to addresses

8) What is a context switch?

A mechanism where the operating system can interrupt a running process, save its state, and then run another process.
