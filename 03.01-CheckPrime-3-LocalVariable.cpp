/*******************************************************
 * File        : 03.01-CheckPrime-2-UsingArray.cpp
 * Description : 判断素数
 * Author      : Joe
 * 
 * 特点：
 *      把 isPrime[n] 替换成了一个局部变量 isPrime，只用于当前循环；
 * 
 *      减少了内存使用（不再创建 bool[999] 的数组）；
 * 
 *      更直观明了，不再容易让人误会是用的“埃氏筛法”。
 * 
 *******************************************************/
#include <iostream>
using namespace std;

int main(){

    for(int n = 2; n <= 999; n++){
        
        bool isPrime = true;

        for(int d = 2; d * d <= n; d++)
            if(n % d == 0){
                isPrime = false;
                break;
            }

        if(isPrime)
            cout << n << ";"; 
    }

    return 0;
}