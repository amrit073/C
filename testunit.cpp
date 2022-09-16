#include "acutest.hpp"
#include "matrix.c"

void test_result(void){
  TEST_CHECK_(add(2,3) == (2+3), "add(%d, %d) = %d", 2,2,(2+3) );
}


TEST_LIST = {
  {"int add(int , int);", test_result},
  {0}
};

