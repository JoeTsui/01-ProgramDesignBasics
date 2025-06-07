/*******************************************************
 * File        : 04.04-InsertionSort-v2.cpp
 * Description : 插入排序
 * Author      : Teacher
 * Date        : 2025-04-12
 * 题目:
 *      抓牌，将抓到的牌按照由小到大的顺序插入现有的手牌中
 * 
 * 解题思路:
 *      枚举每张待插入的牌
 *          找到比待插的牌大的最小的牌的位置
 *          如果找到了位置
 *              枚举从空位置到找到的位置
 *                  把前一张牌往后挪
 *              把待插的牌放到找到的位置中
 * 
 * 注意：
 *   1. while(low <= high) 这个写法的含义是：
 *      只要搜索区间还没缩完（还有可能找到目标），我就继续查找；
 *      
 *******************************************************/

#include <iostream>
using namespace std;

void InsertionSort(int cards[], int n);

int main(){

    int cards[13] = {101, 113, 303, 206, 405, 208, 
                    311, 304, 410, 309, 112, 207, 402};

    for(int i = 0; i < 13; i++)
        cout << cards[i] << " ";
    cout << endl << "排序前手牌如上" << endl;

    InsertionSort(cards, 13);

    for(int i = 0; i < 13; i++)
        cout << cards[i] << " ";
    cout << endl << "排序后手牌如上" << endl;

    return 0;
}

void InsertionSort(int cards[], int n){

    for (int i = 1; i < n; i++)
    {
        int target = cards[i], pos = 0;
    
        while(target > cards[pos])
            pos++;
    
        for(int j = i; j > pos; j--)
            cards[j] = cards[j - 1];
    
        cards[pos] = target;
    
    }
    
}

