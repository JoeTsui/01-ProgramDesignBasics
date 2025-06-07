/*******************************************************
 * File        : 03.01-CheckPrime-1-CallFunction-Teacher.cpp
 * Description : 判断素数
 * Author      : Teacher
 * Date        : 2025-04-09
 * Notes       : 
 *      找到范围内的素数。
 * 
 * 解题思路:
 *      素数的定义是：大于1，仅能被1和本身整除的数。
 *      它是否能被从 2 到 √n（平方根）之间的某个数整除。
 *          为什么只判断到 √n 就可以？
 *              因为如果 n = a × b，
 *              那不是 a 就是 b 至少有一个 ≤ √n，
 *              否则两个数相乘就会超过 n。  
 
 *******************************************************/

#include <iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}


int main() {

    for (int n = 2; n < 100; n++)
        if(isPrime(n))
            cout << n << ";";
    
    return 0;
    
}