# String 基础

1）字符集

字符集 $\sum$

2）字符串

字符串由零个或多个字符组成的有限序列，s 的长度记为 $|S|$。

3）子串

字符串 S 的子串 S[i...j]，其中 i <= j。

4）子串

字符串 S 的子序列是从 S 中将若干元素提取出来并不改变相对位置形成的序列，即
$S[p_1],S[p_2],\ldots,S[p_k]$，$1\le p_1< p_2<\cdots< p_k\le|S|$


5）前缀与后缀

字符串 S 的真前缀为除 S 外的所有前缀，字符串 S 的真后缀为除 S 外的所有后缀

6）字典序

以第 i 个字符作为第 i 关键字进行大小比较，空字符小于字符集内任何字符，如 a < aa

7）回文串

# C++标准库

元素访问
- 下标运算符[]：获取下标位置字符的引用
- at

添加字符和字符串