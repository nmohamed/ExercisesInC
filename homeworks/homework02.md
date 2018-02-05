## Homework 2

### C Exercises

Modify the link below so it points to the `ex02` directory in your
student repository.

[Here is a link to the ex02 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex02)

### Think OS Chapter 2 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1. Give a real-world example of virtualization (ideally not one of
the ones in the book).  What is abstractly true about the system that
is not literally true about the implementation?

For example, a music streaming application like Spotify. You can listen to whatever music Spotify has available as if it were on your listening device. But in reality the .mp3 is not owned by you or even located on your computer. Even if you "download" music to listen to without an internet connection from Spotify, you feel like you own it but the .mp3 is (essentially) inaccessible, so you couldn't save it and stop paying for your Spotify subscription.

2. What is the difference between a program and a process?

A process can run multiple programs/two processes can run the same program.

3. What is the primary purpose of the process abstraction?

So that a change in one component in your system doesn't have undesired effects on other components.

4. What illusion does the process abstraction create?

That running one program is simpler than it is, and that the program might be running at full capacity at any time.

5. What is the kernel?

The part of the operating system responsible for core capabilities like creating threads.

6. What is a daemon?

Processes that run in the background and provide operating system services.
