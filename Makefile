all:
      gcc -std=c++17 matrix.c -o hello

clean:
      $(RM) hello
