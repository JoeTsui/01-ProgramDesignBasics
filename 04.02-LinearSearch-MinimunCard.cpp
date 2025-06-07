/*******************************************************
 * File        : 04.02-LinearSearch-MinimunCard.cpp
 * Description : 线性查扑克牌
 * Author      : Teacher
 * Date        : 2025-04-12
 * 题目:
 *      找到手中比7大的最小的牌
 * 
 * 解题思路:
 *      初始化当前最小值及位置；
 *      依次枚举每张牌;
 *          若比7大
 *              若比最小值小
 *                  更新最小值及位置
 *******************************************************/

#include <iostream>
using namespace std;
 
int main() {

    int cards[13] = {101, 113, 303, 206, 405, 208,
                    313, 304, 410, 309, 112, 207, 402};

    int min = 100, pos = -1;

    for(int i = 0; i < 13; i++)
        if(cards[i] % 100 > 7)
            if (cards[i] % 100 < min){
                min = cards[i] % 100;
                pos = i;
            }

    cout << "比7大的最小的牌为第" << pos + 1 << "张" << endl;

    return 0;
}