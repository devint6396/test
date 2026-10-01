# C Practice

This workspace is ready for C17 practice with Clang.

## Run the program

Click **Run** in Replit. The configured command compiles `main.c` with C17 and common warnings enabled, then runs it.

To compile and run from the Shell:

```sh
clang -std=c17 -Wall -Wextra -Wpedantic main.c -o main
./main
```

Edit `main.c` to practice. The compiled `main` executable and object files are ignored by Git.

## Inline suggestions

Replit does not support installing third-party VS Code extensions. To use Replit's built-in AI completions, open **User Settings** in the Project Editor, go to **Code intelligence**, and enable **AI code completion**.