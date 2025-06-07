/*******************************************************
 * File        : 05.03-MergeSort.cpp
 * Description : 归并排序
 * Author      : Teacher
 * Date        : 2025-04-13
 * 题目:
 *      
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



int main(){

}


//对array数组下标范围在[start, end)的元素进行排序
void MergeSort(int * array, int start, int end){
    //d递归终止条件
    if(start == end - 1)
        return;
    //对两个子数组分开排序
    int mid = (end + start) / 2;
    MergeSort(array, start, mid);
    MergeSort(array, mid, end);

    //分配临时空间存放合并元素
    int * tmp = new int[end - start];
    //依次取出子数组的元素，进行合并
    int left_idx = start, right_idx = mid, i = 0;
    while(left_idx < mid && right_idx < end){
        if(array[left_idx] < array[right_idx])
            tmp[i++] = array[left_idx++];
        else
            tmp[i++] = array[right_idx++];
    }
    //如果子数组元素没有取完，则全部并入临时空间
    while(left_idx < mid)
        tmp[i++] = array[left_idx++];
    while(right_idx < end)
        tmp[i++] = array[right_idx++];
    //从临时空间复制回返回数组
    for(int i = 0, idx = start; i < end - start; i++, idx++)
        array[idx] = tmp[i];
    //释放临时空间
    delete[] tmp;
}

