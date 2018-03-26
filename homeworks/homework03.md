## Homework 3

### C Exercises

Modify the link below so it points to the `ex03` directory in your
student repository.

[Here is a link to the ex03 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex03)

### Think OS Chapter 3 reading questions

**Files and file systems**

1) What abstractions do file systems provide?  Give an example of something that is logically
true about files systems but not true of their implementations.

They allow you to avoid complications like only being able to write to a block in a solid state drive a limited number of times.
They appear to be byte based but are actually block based.

2) What information do you imagine is stored in an `OpenFileTableEntry`?

The position you're reading from, how big the file is.

3) What are some of the ways operating systems deal with the relatively slow performance of persistent storage?

Block transfers, where systems try to read large blocks since the time to load bigger blocks is negligible. Prefetching, where the OS predictively loads a block before it'd requested. Buffering, where data is stored in memory and written to disk later. And finally, chaching.

4) Suppose your program writes a file and prints a message indicating that it is done writing.  
Then a power cut crashes your computer.  After you restore power and reboot the computer, you find that the
file you wrote is not there.  What happened?

The data might have been in a cache and not actually written.

5) Can you think of one advantage of a File Allocation Table over a UNIX inode?  Or an advantage of a inode over a FAT?

An inode seems to have a faster search time since all blocks are located in the same file. FAT might be faster if you have more knowledge on where blocks are located.

6) What is overhead?  What is fragmentation?

Overhead refers to how much space is left over/taken by the data structures. Fragmentation refers to blocks that are unused/partially used

7) Why is the "everything is a file" principle a good idea?  Why might it be a bad idea?

You can set up processes so that the output from one is taken as input into another, making it more efficient. It makes programming easier since there's only one API and programs are more versatile since they can work with data from a variety of sources. It can be a bad idea because it limits the amount of ways you can manipulate/process data, which may be bad depending on if you want to do a specific implementation.

If you would like to learn more about file systems, a good next step is to learn about journaling file systems.  
Start with [this Wikipedia article](https://en.wikipedia.org/wiki/Journaling_file_system), then
[Anatomy of Linux Journaling File Systems](http://www.ibm.com/developerworks/library/l-journaling-filesystems/index.html).  
Also consider reading [this USENIX paper](https://www.usenix.org/legacy/event/usenix05/tech/general/full_papers/prabhakaran/prabhakaran.pdf).
