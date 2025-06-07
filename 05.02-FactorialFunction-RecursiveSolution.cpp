/*******************************************************
 * File        : 05.02-FactorialFunction-RecursiveSolution.cpp
 * Description : 阶乘问题，递归解法
 * Author      : Teacher
 * Date        : 2025-04-13
 * 题目:
 *      下面三个公式有什么区别？
 *      n! = n * (n - 1)!
 * 
 * 解法：递归求解
 * 
 * 
 *******************************************************/

#include <iostream>
using namespace std;

int fact(int n);

int main(){

   cout << "fact(3) = " << fact(3) << endl;
   return 0;

}

int fact(int n){
   if(n == 1)     //递归终止条件
      return 1;   //直接返回结果
   return n * fact(n - 1); // n * (n - 1)!自己调用自己
}
