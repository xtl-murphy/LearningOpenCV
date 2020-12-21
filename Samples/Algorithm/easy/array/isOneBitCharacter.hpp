/**
 * deleteDuplicates
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/12/21 上午8:22
 **/
#pragma once

#include "Learning.hpp"

/**
 * 有两种特殊字符。第一种字符可以用一比特0来表示。第二种字符可以用两比特(10 或 11)来表示。
    现给一个由若干比特组成的字符串。问最后一个字符是否必定为一个一比特字符。给定的字符串总是由0结束。
 * @param bits
 * @return
 */

bool isOneBitCharacter(std::vector<int>& bits) {
    for (int i = 0; i < bits.size();) {
        if (bits[i] == 1) {
            i += 2;
        }
        else {
            i++;
        }
        if (i >= bits.size()) {
            return false;
        }
    }
    return true;
}