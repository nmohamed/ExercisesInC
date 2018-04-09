## Homework 8

### C Exercises

Modify the link below so it points to the `ex08` directory in your
student repository.

[Here is a link to the ex08 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex08)

### Think OS Chapter 8 reading questions

**Multitasking**

1) What is the kernel's most basic task?

To handle interrupts, which are events that stop the normal instruction cycle and ause execution flow to jump to the interrupt handler

2) When an interrupt occurs, what part of the hardware state is saved by hardware?

The program counter

3) What is the difference between an interrupt and a context switch?

Context switches lets you switch to a new process while interrupts stick with the same process.

4) Give an example of an event that might cause a process to move from the blocked to the ready state.

When an operation (such as a disk request) completes, there's an interrupt. Interrupt handler figuers out which process was waiting for the request and switches its state from blocked to ready.

5) Why might a scheduler want to give higher priority to an I/O bound process?

I/O bound processes run faster if data input and output went faster, but not with more CPU time. So doing it earlier will let them run faster.

6) When I make French toast, I usually make a batch of 12 slices.  But my griddle only has room for 8 slices.
Each piece of toast has to cook for 5 minutes on each side.  How can I schedule 12 slices onto 8 "cores"
to minimize the elapsed time to cook all 12 slices?  (Note: this question is not hypothetical;
this is really how I make French toast.)

8 pieces. Then 4 from those 8 and a new 4 pieces. Then finish the 4 new pieces with 4 old pieces. 15 min total, instead of 20.
