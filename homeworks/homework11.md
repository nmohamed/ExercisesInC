## Homework 11

### C Exercises

Modify the link below so it points to the `ex11` directory in your
student repository.

[Here is a link to the ex11 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex11)

### Think OS Chapter 11 reading questions

1) Why is is a bad idea to pass a `sem_t` as a parameter?

Its behavior is undefined and passing it as a parameter means you're making a copy of the contents.

2) When you use a Semaphore as a mutex, what should its initial value be?

`Semaphore *mutex = make_semaphore(1);`

3) Can you think of another use for a Semaphore where you might use a different initial value?

You can use a different value that would mean it's locked (1 means it's unlocked)

4) In my solution to the producers-consumers problem using Semaphores,
what does it mean if the value of `queue->spaces` is `3` at some point in time?

There are 3 empty spaces (the length is 4)

5) What does it mean if `queue->space` is `-3`?

3 values were overwritten

6) Why doesn't `queue_pop` have to use `queue_empty` to check whether the queue is empty?

It waits until there are any items in the first place, so doing so is unnecessary

7) Any problem that can be solved with Semaphores can also be solved with mutexes and condition variables.
How can you prove that that's true?

By implementing a semaphore using condition variables and mutezes

8) What is Property 3?  Hint: see *The Little Book of Semaphores*,
[Section 4.3](http://greenteapress.com/semaphores/LittleBookOfSemaphores.pdf).

If there are threads waiting on a semaphore when a thread executes signal, then one of the waiting threads has to be woken.
