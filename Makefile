all:
	g++ -std=c++17 matrix.c -o hello
	
test:
	g++ -std=c++17 testunit.cpp -o test

clean:
	$(RM) hello test
