/*******************************************************
 * File        : 05.01-FactorialFunction.cpp
 * Description : 阶乘
 * Author      : Teacher
 * Date        : 2025-04-13
 * 题目:
 *      下面三个公式有什么区别？
 *      n! = 1 * 2 * ... * n
 *      n! = (n - 1)! * n
 *      n! = n * (n - 1)!
 * 
 * 
 *******************************************************/

#include <iostream>
using namespace std;

int fact1(int n);
int fact2(int n);

int main(){

   cout << "fact1(3) = " << fact1(3) << endl;
   cout << "fact2(4) = " << fact2(4) << endl;
   return 0;
}

int fact1(int n){
   int m = 1;
   for(int i = 1; i <= n; i++)
      m = m * i;
   return m;
}

int fact2(int n){
   int m[10]; //假设求10以内的整数的阶乘
   m[1] = 1;  //递推的起始值
   for(int i = 2; i <= n; i++)
      m[i] = m[i - 1] * i;
   return m[n];  //返回递推的终值
}