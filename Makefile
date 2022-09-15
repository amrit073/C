all:
      gcc -std=c++17 matrix.c -o out

clean:
      $(RM) out
