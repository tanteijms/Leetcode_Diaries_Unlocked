# Leetcode_Diaries_Unlocked
## by tanteijms

## 题目索引
[3. 无重复字符的最长子串](/leetcode/3.%20无重复字符的最长子串/3.%20无重复字符的最长子串.md)  
[11. 盛最多水的容器](/leetcode/11.%20盛最多水的容器/11.%20盛最多水的容器.md)  
[15. 三数之和](/leetcode/15.%20三数之和/15.%20三数之和%203.3%203.4.md)  
[16. 最接近的三数之和](/leetcode/16.%20最接近的三数之和/16.%20最接近的三数之和.md)  
[18. 四数之和](/leetcode/18.%20四数之和/18.%20四数之和.md)  
[42. 接雨水](/leetcode/42.%20接雨水/42.%20接雨水.md)  
[167. 两数之和 II - 输入有序数组](/leetcode/167.%20两数之和%20II%20-%20输入有序数组/167.两数之和%20II.md)  
[209. 长度最小的子数组](/leetcode/209.%20长度最小的子数组/209.%20长度最小的子数组.md)  
[611. 有效数的个数](/leetcode/611.%20有效数的个数/611.%20有效数的个数.md)  
[713. 乘积小于 K 的子数组](/leetcode/713.%20乘积小于%20K%20的子数组/713.%20乘积小于%20K%20的子数组.md)  
[1004. 最大连续1的个数 III](/leetcode/1004.%20最大连续1的个数%20III/1004.%20最大连续1的个数%20III.md)  
[2730. 找到最长的半重复子字符串](/leetcode/2730.%20找到最长的半重复子字符串/2730.%20找到最长的半重复子字符串.md)  
[2779. 数组的最大美丽值](/leetcode/2779.%20数组的最大美丽值/2779.%20数组的最大美丽值.md)  
[2824. 统计和小于目标的下标对数目](/leetcode/2824.%20统计和小于目标的下标对数目/2824.%20统计和小于目标的下标对数目.md)  
[2958. 最多 K 个重复元素的最长子数组](/leetcode/2958.%20最多%20K%20个重复元素的最长子数组/2958.%20最多%20K%20个重复元素的最长子数组.md)  
[2962. 统计最大元素出现至少 K 次的子数组](/leetcode/2962.%20统计最大元素出现至少%20K%20次的子数组/2962.%20统计最大元素出现至少%20K%20次的子数组.md)  

## LeetCode 题解记录  

本仓库为个人练习 LeetCode 题库的答案集合，部分算法思路参考 灵茶山艾府@EndlessCheng (https://github.com/EndlessCheng/codeforces-go/blob/master/leetcode/README.md)。  

本仓库仅作个人练习与记录之用。  
若有纰漏或错误，欢迎提交 issue 或联系本人：tanteijms@bupt.edu.cn / tanteijmstrribbi@gmail.com。  

## **致谢**  
部分算法思路参考自 @EndlessCheng 的仓库，该仓库采用 MIT 许可证开源。  
如果本仓库中的代码直接改编自该项目，将在相应文件中保留原始 MIT 许可证声明。  

如下：
```cpp
/*
 * 部分代码改编自 @EndlessCheng 的开源仓库：
 * https://github.com/EndlessCheng/codeforces-go/blob/master/leetcode/
 * 该仓库采用 MIT 许可证开源。
 * 
 * 原始 MIT 许可证：
 * 
 * MIT License
 *
 * Copyright (c) 2019 Σndless
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
```

## LeetCode Solutions  

This repository is a personal practice collection of solutions for LeetCode problems.  
Some algorithm ideas refer to 灵茶山艾府@EndlessCheng (https://github.com/EndlessCheng/codeforces-go/blob/master/leetcode/README.md).  

This repository is for personal practice and reference only.  
If there are any mistakes or errors, please feel free to open an issue or contact me at tanteijms@bupt.edu.cn / tanteijmstrribbi@gmail.com.  

## Acknowledgements  
Some ideas are inspired by @EndlessCheng's repository, which is licensed under the MIT License.  
If any code is directly adapted from it, the original MIT License is retained in the corresponding files.  

e.g.
```cpp
/*
 * Some parts of this code are adapted from @EndlessCheng's repository:
 * https://github.com/EndlessCheng/codeforces-go/blob/master/leetcode/
 * Licensed under the MIT License.
 * 
 * Original License:
 * 
 * MIT License
 *
 * Copyright (c) 2019 Σndless
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
```