/*******************************************************
 * File        : 05.04-QuickSort.cpp
 * Description : 快速排序
 * Author      : Teacher
 * Date        : 2025-04-17
 * 题目:
 *      
 * 
 * 解题思路:
 * 挑选基准值：从数列中挑出一个元素，称为“基准”（pivot），
 * 分割：重新排序数列，所有比基准值小的元素摆放在基准前面，
 * 所有比基准值大的元素摆在基准后面（与基准值相等的数可以到任何一边）。
 * 在这个分割结束之后，对基准值的排序就已经完成，
 * 
 * 递归排序子序列：
 * 递归地将小于基准值元素的子序列和大于基准值元素的子序列排序
 * 
 *        
 *******************************************************/

 #include <iostream>
 using namespace std;



 int main(){

 }


//对array数组下标范围在[start, end)的元素进行排序
void QuickSort(int * array, int len){
    if(len <= 1)
        return;
    //按最坏可能，为两个子数组分配空间
    int * left = new int[len], * right = new int[len];
    //设置两个子数组长度的初值（为零）
    int left_idx = 0, right_idx = 0;
    //1.拆分
    int key = array[0];
    for(int i = 1; i < len; i++){
        if(array[i] < key)
            left[left_idx++] = array[i];
        if(array[i] > key)
            right[right_idx++] = array[i];
    }
    //2.对子数组排序
    QuickSort(left, left_idx);
    QuickSort(right, right_idx);
    //3.合并子数组
    int idx = 0;
    for(int i = 0; i < left_idx; i++)
        array[idx++] = left[i];
    array[idx++] = key;
    for(int i = 0; i < right_idx; i++)
        array[idx++] = right[i];
    //释放空间
    delete[] left;
    delete[] right;
}

