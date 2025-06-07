/*******************************************************
 * File        : 03.01-CheckPrime-2-UsingArray.cpp
 * Description : 判断素数
 * Author      : Joe
 * 
 * 不足：
 * bool isPrime[999]; 声明了一个布尔数组，意图是标记是否为素数。
 * 但实际上，没有用“筛法”来修改后续值，只是用它来保存判断结果。
 * 这种写法不需要用数组，一个 bool flag 就够。使用数组有些浪费空间、降低可读性。
 * 
 *******************************************************/
#include <iostream>
using namespace std;

int main(){

    bool isPrime[999];

    for(int i = 0; i <= 999; i++){
        isPrime[i] = 1;
    }

    for(int n = 2; n <= 999; n++){
        for(int d = 2; d * d <= n; d++)
            if(n % d == 0){
                isPrime[n] = 0;
                break;
            }

        if(isPrime[n])
            cout << n << ";"; 
    }

    return 0;
}