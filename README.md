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

## Compile and run a selected source file

Use the Bash helper with the filename:

```sh
bash run-source.sh calc.c
bash run-source.sh path/to/program.cpp
```

It uses `gcc` for `.c` files and `g++` for `.cc`, `.cpp`, and `.cxx` files, then runs the program. Extra arguments are passed to the program:

```sh
bash run-source.sh program.c first-argument second-argument
```

`bash calc.c` by itself does not compile C; Bash treats `calc.c` as a shell script. The helper keeps Bash's normal behavior intact.

## Inline suggestions

Replit does not support installing third-party VS Code extensions. To use Replit's built-in AI completions, open **User Settings** in the Project Editor, go to **Code intelligence**, and enable **AI code completion**.