/*******************************************************
 * File        : 04.03-BinarySearch-PickCard.cpp
 * Description : 折半查找
 * Author      : Teacher
 * Date        : 2025-04-12
 * 题目:
 *      已知手中的扑克有顺序，能否用折半查找的方式找黑桃Q
 * 
 * 解题思路:
 *      初始化查找范围，假设没有黑桃Q
 *      如果范围内有牌，一直进行
 *          选取中间一张
 *          如果中间的牌是黑桃Q
 *              记下位置；
 *              停止查找；
 *          否则，若中间的牌比黑桃Q大
 *              更新范围，在左侧寻找
 *          否则
 *              更新范围，在左侧寻找
 * 
 * 注意：
 *   1. while(low <= high) 这个写法的含义是：
 *      只要搜索区间还没缩完（还有可能找到目标），我就继续查找；
 *      每一次查找后，都会更新 low 或 high，让范围不断缩小；
 *      一旦目标值找到，或者 low > high，就结束。
 *          这是典型的“条件控制循环”：
 *      我不知道要循环多少次，但我知道什么时候可以停下来。
 *      所以——while 更适合用在“不确定循环次数”的场景，比如查找。
 * 
 *   2. for 通常用于已知循环次数的场合，比如：
 *      for (int i = 0; i < 10; i++) {
 *          // 重复10次
 *      }
 * 
 *      当然，你也能把二分查找写成 for：
 *      for (; low <= high; ) {
 *          int mid = (low + high)/2;
 *      }
 * 
 *      这也能跑，但此时的 for 其实只是 while 的另一种写法，
 *      逻辑上没有优势，还不如直接用 while 更清晰易读。
 *******************************************************/

#include <iostream>
using namespace std;
 
int main() {

    int cards[13] = {101, 112, 113, 206, 207, 208, 303,
                    304, 309, 311, 402, 405, 410};
    
    int id = -1, low = 0, high = 12;

    while(low <= high) {
        int middle = (low + high) / 2;
        if(cards[middle] == 112){
            id = middle;
            break;
        }
        else if(cards[middle] > 112)
            high = middle - 1;
        else
            low = middle + 1;
    }

    cout << "黑桃Q在第:" << id + 1 << "张";

    return 0;
}