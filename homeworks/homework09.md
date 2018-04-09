## Homework 9

### C Exercises

Modify the link below so it points to the `ex09` directory in your
student repository.

[Here is a link to the ex09 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex09)

### Think OS Chapter 9 reading questions

1) Why does each thread have its own stack?

So threads can call functions without interfering with each other.

2) What does the gcc flag `-lpthread` do?

It links the pthread library, and pre-defined macros aren't defined

3) What does the argument of `pthread_exit` do?

It can be used to pass a value to the thread that joins with the current thread

4) Normally the same thread that created a thread also waits to join it.
What happens if another thread tries to join a thread it did not create?

Nothing? Since threads can join any other thread

5) What goes wrong if several threads try to increment a shared integer at the same time?

Threads can be interrupted at different points/schedules can choose different threads to run, so the sequence of events can be different/seemingly random.

6) What does it mean to "lock a mutex"?

It has the effect of barring all other threads.
