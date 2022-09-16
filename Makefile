all:
	g++ -std=c++17 matrix.cpp -o hello
	
test:
	g++ -std=c++17 testunit.cpp -o test

clean:
	$(RM) hello test
