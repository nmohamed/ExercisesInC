## Homework 6

### C Exercises

Modify the link below so it points to the `ex06` directory in your
student repository.

[Here is a link to the ex06 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex06)

### Think OS Chapter 6 reading questions

**Memory management**

1) Which memory management functions would you expect to take constant time?
Which ones take time proportional to the size of the allocated chunk?

`free` and possibly `malloc`

2) For each of the following memory errors, give an example of something that might go wrong:

a) Reading from unallocated memory.

You will read something seemingly random or segfault

b) Writing to unallocated memory.

Segfault or overwriting memory for something possibly important

c) Reading from a freed chunk.

Segfault possibly, or you are reading from a chunk that might be in use for something else after being freed.

d) Writing to a freed chunk.

Nothing, segfault, or you might overwrite something that was written in the chunk after it was freed

e) Failing to free a chunk that is no longer needed.

You are leaking memory and creating less space for your program to use, possibly slowing your computer.


3) Run

```
    ps aux --sort rss
```

to see a list of processes sorted by RSS, which is "resident set size", the amount of physical
memory a process has.  Which processes are using the most memory?

```
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root         1  0.7  0.0  10432   580 ?        Ss   17:28   0:00 /init
nora        18  0.0  0.0  41448  1812 tty1     R    17:28   0:00 ps aux --sort rss
nora         2  0.5  0.0  25784  3580 tty1     Ss   17:28   0:00 -bash  
```

According to the output, none of them since they're all not using memory. But this is because I'm using Ubuntu for Windows. The process using the most memory on Windows right now is probably Chrome, then Atom.

4) What's wrong with allocating a large number of small chunks?  What can you do to mitigate the problem?

The heap will become fragmented, since the space is broken down into too many small pieces, Space is wasted and it slows the program by making memory caches less effective. 

If you want to know more about how malloc works, read
[Doug Lea's paper about dlmalloc](http://gee.cs.oswego.edu/dl/html/malloc.html)
