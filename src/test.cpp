#include "var9.h"

bool var9Test()
{
  std::vector<double> v1{1,2,3,4,5,6,7,8,9};
  std::vector<double> v2{-1,-2,-3,4,5,6,7,8,9};
  std::vector<double> v3{123,222,111,444, 77,66,88,99, 1,2,3,4, 18,19,-21,54};
  
  std::vector<double> expected_v1{12,2,3,4,15,6,7,8,18};
  std::vector<double> expected_v2{-1,-2,-3,4,5,6,7,8,9};
  std::vector<double> expected_v3{123+77+1+18,222,111,444, 77,222+66+2+19,88,99, 1,2,3,4, 18,19,-21,444+99+4+54};
  
  std::vector<double> returned_v1 = DiagSum(v1);
  std::vector<double> returned_v2 = DiagSum(v2);
  std::vector<double> returned_v3 = DiagSum(v3);
  
  bool isSuccess1 = true;
  bool isSuccess2 = true;
  bool isSuccess3 = true;
  
  for(int i = 0; i < (int)v1.size(); i++)
  {
    if(expected_v1[i] != returned_v1[i])
    {
      std::cout<<"v1 unmatched\n";
      isSuccess1 = false;
      break;
    }
  }
  if(isSuccess1)
    std::cout<<"v1 success\n";
    
  for(int i = 0; i < (int)v2.size(); i++)
  {
    if(expected_v2[i] != returned_v2[i])
    {
      std::cout<<"v2 unmatched\n";
      isSuccess2 = false;
      break;
    }
  }
  if(isSuccess2)
    std::cout<<"v2 success\n";
    
  for(int i = 0; i < (int)v3.size(); i++)
  {
    if(expected_v3[i] != returned_v3[i])
    {
      std::cout<<"v3 unmatched\n";
      isSuccess3 = false;
      break;
    }
  }
  if(isSuccess3)
    std::cout<<"v3 success\n";
    
  return isSuccess1 && isSuccess2 && isSuccess3;
}

int main()
{
  if(!var9Test())
    return 1;
  
  std::cout << "All test passed!\n";
  
  return 0;
}
