## Homework 10

### C Exercises

Modify the link below so it points to the `ex12` directory in your
student repository.  That's right, Homework 10 is to do Exercise 12.

[Here is a link to the ex12 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex12)

### Think OS Chapter 10 reading questions

1) What does it mean to say that a data structure is thread safe?

The data structure can by accessed by multiple threads, where its value is consistent and expected. If one thread increments it, the other thread now has that updated value.

2) In the circular buffer implementation of a queue, why is the maximum number of elements in the queue `n-1`,
if `n` is the size of the array?

The extra element is to have a head and tail for the buffer so you know if you've reached the end or not (since it's circular). If the head and tail reside on the same node the buffer is empty.

3) If there is no mutex to protect the queue, give an example of a sequence of steps that could leave
the queue in an inconsistent state.

`next_out` can be changed at the same time, making the queue repeat an item in the array.

4) When a thread calls `cond_wait`, why does it have to unlock the mutex before blocking?

If it was locked then the items can't be added to the queue since other threads can't access it

5) When a thread returns from `cond_wait`, what do we know is definitely true?  What do we think is probably true?

It loops back to the top of the while loop. We can assume the queue isn't empty and that the mutex is locked. The condition is true

6) What happens if you signal a condition variable when there are no waiting threads?

Nothing.

7) Do you have to lock the mutex to signal a condition variable?

No.

8) Does the condition have to be true when you signal a condition variable?

Yes, but you should recheck the condition since it could have changed
