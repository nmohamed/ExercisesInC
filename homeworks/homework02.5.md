## Homework 2.5

### C Exercises

Modify the link below so it points to the `ex02.5` directory in your
student repository.

[Here is a link to the ex02.5 directory in my repository](https://github.com/YOUR_GITHUB_USERNAME_HERE/ExercisesInC/tree/master/exercises/ex02.5)

### Think OS Chapter 3 reading questions

### Virtual memory

1) The Georgian alphabet has 33 letters.  How many bit are needed to specify a letter?

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
