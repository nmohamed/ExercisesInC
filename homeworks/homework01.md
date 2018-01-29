## Homework 1

### C Exercises

Modify the link below so it points to the `ex01` directory in your
student repository.

[Here is a link to the ex01 directory in my repository](https://github.com/nmohamed/ExercisesInC/tree/master/exercises/ex01)

### Think OS Chapter 1 reading questions

For each of the reading questions below, write answers in the form of
a clear, concise, complete sentence or two.

1) Give an example of a feature common in interpreted languages that is rare in compiled languages.

  Dynamic variable declarations. For example, 'var a = 1' is valid in JS, whereas in C you must specify that a is an integer.

2) Name two advantages of static typing over dynamic typing.

  There is less room for making errors since you have such explicit declarations (type checking). You can also find errors in parts of the program that haven't run, and these checks don't have to happen at run time (saving space).

3) Give an example of a static semantic error.

  "int a = 1.1"

4) What are two reasons you might want to turn off code optimization?

It makes debugging easier, and it lets you know if your code is passing the tests you wrote for it.

5) When you run `gcc` with `-S`, why might the results look different on different computers?

It's configured to generate code for the machine you're running on. If you have different architecture, it'll look different.

6) If you spell a variable name wrong, or if you spell a function name wrong, the error messages you get might look very different.  Why?

It depends on where the message is coming from; the preprocessor will give different messages than the compiler or the linker

7) What is a segmentation fault?

When something is read or written from an incorrect location in memory.
