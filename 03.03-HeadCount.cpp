/*******************************************************
 * File        : 03.03-HeadCount.cpp
 * Description : 数人数
 * Author      : Teacher
 * Date        : 2025-04-12
 * 题目:
 *      一堆人排队，
 *      站成3人一排，有2人多出来；
 *      站成5人一排，有2人多出来；
 *      站成7人一排，有3人多出来
 *      问共有多少人。
 * 
 * 解题思路:
 *      输入n，假定从200开始。
 *      验证里面的3个条件，当3个条件都符合，
 *      输出在[1,n]范围内的数。
 *      
 * 注释：
 *      i人一排，多出来r人。
 *      n = k * i + r;
 * 
 *******************************************************/

#include <iostream>
using namespace std;
 
int main() {
    
    int sieve[200];

    for(int i = 0; i <= 200; i++)
        sieve[i] = 0;

    int r3, r5, r7;
    cout << "请按照顺序依次输入排队多出人数：";
    cin >> r3 >> r5 >> r7;

    for(int i = r3; i <= 200; i = i + 3)
        sieve[i]++;
    for(int i = r5; i <= 200; i = i + 5)
        sieve[i]++;
    for(int i = r7; i <= 200; i = i + 7)
        sieve[i]++;

    for(int i = 0; i <= 200; i++)
        if(sieve[i] == 3)
            cout << i << ";";

    return 0;
}