/*******************************************************
 * File        : 04.06-SelectionSort.cpp
 * Description : 插入排序
 * Author      : Teacher
 * Date        : 2025-04-12
 * 题目:
 *      从手中无序的手牌中，找到最小的一个，放到已排列的
 *      序列的末尾。
 * 
 * 解题思路:
 *      枚举每个位置i
 *          假设第i个元素是最小的
 *          枚举位置i以后的每个元素j
 *              如果比最小值小
 *                  标记最小值为元素j
 *          将是最小的的牌交换到位置i处
 * 
 * 注意：
 *   1. 为什么函数的返回值为void
 *          数组在函数中传进去的是“地址”（也叫引用），
 *          所以在函数里改了，外面的数组也会跟着改，不需要再“返回”。
 *        
 *******************************************************/

#include <iostream>
using namespace std;

void SelectionSort(int cards[], int n);

int main(){

    int cards[13] = {101, 113, 303, 206, 405, 208, 
                    311, 304, 410, 309, 112, 207, 402};

    for(int i = 0; i < 13; i++)
        cout << cards[i] << " ";
    cout << endl << "排序前手牌如上" << endl;

    SelectionSort(cards, 13);

    for(int i = 0; i < 13; i++)
        cout << cards[i] << " ";
    cout << endl << "排序后手牌如上" << endl;

    return 0;
}



void SelectionSort(int cards[], int n){
    for(int i = 1; i < n; i++){

        int min = cards[i], min_id = i;

        for(int j = i + 1; j < n; j++)
            if(cards[j] < min){
                min = cards[j];
                min_id = j;
            }

        cards[min_id] = cards[i];
        cards[i] = min;
    }
}

