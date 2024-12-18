# 學科能力競賽 複賽 題解


## **A.最短路** ***<font color = '#AAAAAA'> The Shortest Path </font>***

> **出題**
> ***ysh***

> **首殺**
> **薛尹喆**

> **提交次數**
> ***13***

### ***subtask1***: $3\%$ $N, M \le 9$

$\text{brute force}$

### ***subtask2***: $28\%$ $M = N - 1$

給定的圖為一棵樹，因此最短路是唯一的，邊$DFS$或$BFS$邊取模即可。

### ***subtask3***: $28\%$ $N, M \le 100$

注意到$N, M$不大，因此可以跑 $\text{dijkstra}$，並用```std::string```維護最短路的距離。

### ***subtask4***: $41\%$ $N, M \le 10^5$

假設一個邊的邊權為```abcde```，則我們可以將一個邊擴展成五個邊權都為一位數的邊(可以透過建立虛點做到這件事)，然後又發現到最短路的路徑一定會***經過最少的邊***，因此我們可以藉由```greedy```來計算出答案。

## **B. 跨欄** ***<font color = '#AAAAAA'> sprint hurdles </font>***

> **出題**
> **hamster**

> **首殺**
> **薛尹喆**

> **提交次數**
> ***65***


[更詳細的題解](https://hackmd.io/@41Ff70cKQcWtDdFcKjpW6A/B1MB_xJhA)
### ***Subtask***
 - ***subtask1***: $13\%$ $1 \leq n \leq 15, 2 \leq k \leq 5
     枚舉所有走法，找最佳解。
 - ***subtask2***: $87\%$ $2 \leq n \leq 10^5, 2 \leq k \leq n$
     二分搜

## **C. 好多零食** ***<font color = '#AAAAAA'> Omega Love Food </font>***

> **出題**
> **hamster**

> **首殺**
> **薛尹喆**

> **提交次數**
> ***141***

[更詳細的題解](https://hackmd.io/@41Ff70cKQcWtDdFcKjpW6A/B1MB_xJhA)

### ***Subtask***
 - ***subtask1***: $13\%$ $1 \le w_i \le n \leq 100$
     暴力枚舉左右界
- ***subtask2***: $22\%$ $1 \le w_i \le n \leq 2500$
    固定左界往右掃
- ***subtask3***: $25\%$ $1 \le n \leq 2500$, $1  \leq w_i \leq 10^9$
    數值太大不能直接存array->離散化/set/map
- ***subtask4***: $40\%$ $1 \le n \leq 10^6$, $1  \leq w_i \leq 10^9$
    two pointer亂做




## **D. 新番補完計劃** ***<font color = '#AAAAAA'>  Instrumentality Of Anime Completion </font>***

> **出題**
> ***MelonHiker***

> **首殺**
> ****

> **提交次數**
> ******

~這題非常有區賽的風格~~。由於輸入包含空格，因此需要使用 getline 來讀取整行輸入，再用 `;` 將字串分割。C++ 中的 string 類型已經內建字典序排序功能，因此不需要自行撰寫比較函數。

至於日期的排序，由於日期格式是固定，其實直接使用字典序排序即可，不需要將日期轉換成數字並進行自訂排序。接著，介紹一下 pair 的排序規則：pair 會先比較 .first 的元素，如果 .first 相等，則比較 .second 的元素。因此，我們可以使用 `{日期, 動畫名稱}` 的形式進行排序，這樣就可以達到題目的要求。

善用 map、set、pair、vector 等 STL 容器，可以讓程式碼更加簡潔。
~然後這題測資是我用爬蟲爬的~~
## **E. 會贏喔** ***<font color = '#AAAAAA'> I Will Win </font>***

> **出題**
> ***hamster***

> **首殺**
> **薛尹喆**

> **提交次數**
> ***88***

### ***Subtask***
 - ***subtask1***: $3\%$  $N=1$
   就1種排列記得k也要等於1
 - ***subtask2***: $7\%$  $N=K$
   也是1種排列
 - ***subtask3***: $11\%$  $K=1$
   (n-1)!個排列
 - ***subtask4***: $27\%$ $1\leq  N \leq 10$
   窮舉就行了
 - ***subtask5***: $52\%$ $As$ $statement$
   dp[i][j]=dp[i-1][j-1]+(i-1)*dp[i-1][j]
   dp[i-1][j-1]把最大的放最右邊
   dp[i-1][j]把不是最大放最右邊


## **F. HARC** ***<font color = '#AAAAAA'> Hiding A Real Capability </font>***

> **出題**
> ***hamster***

> **首殺**
> **???**
  
> **提交次數**
  ***owo***
 
 - ***subtask1***: $5\%$  $N=1$
 檢查s1有沒有H就好
 - ***subtask5***: $95\%$ $As$ $statement$
 先對i=1~n-2做操作4(由上數下來
 再做操作3
 再做操作2
 再做操作1

水，~~比 ***Zebra*** 還水~~

## **G. 桌遊** ***<font color = '#AAAAAA'> Board Game </font>***

> **出題**
> ***ysh***

> **首殺**
> **???**

> **提交次數**
> ******

### ***subtask***: $100\%$ ***As statement***

水，~~比 ***Zebra*** 還水~~

## **H. 桌遊 2** ***<font color = '#AAAAAA'> Board Game 2</font>***

> **出題**
> ***ysh***

> **首殺**
> **???**

> **提交次數**
> ******

### ***subtask***: $100\%$ ***As statement***

水，~~比 ***Zebra*** 還水~~

## **I. 賭博破產我轉職成⼤魔法師** ***<font color = '#AAAAAA'> Bankrupt Gambler Reborn As A Mage </font>***

> **出題**
> ***MelonHiker***

> **首殺**
> **???**

> **提交次數**
> ******
> 
### ***Subtask***
 - ***subtask1***: $30\%$ $N \leq 20$
由於 $2X + 1$ 必為奇數，且 $4X$ 必為偶數，故我們只需根據數字的奇偶性來進行逆運算，即可得知該數字是由哪個數字變來的。因此，只需窮舉 $1, 2, \ldots, 2^N$ 的數字來判斷是否是從 $0$ 變來得及可。

 - ***subtask2***: $30\%$ $N \leq 10^6$
用二進制來想，$2X + 1$ 其實是在二進制的 $X$ 後面補 $1$；$4X$ 則是在二進制的 $X$ 後面補 $00$。然後題目規定數字 $\leq 2^N - 1 = \underbrace{111\ldots1}_{n\text{個}}$，所以可知最大數字二進制長度不超過 $N$。這裡我們定義 $a_N := 二進制長度為 N 符合題目條件的所有組合$，則所求為 $\sum_{i = 1}^{N}a_i$。那長度為 $N$ 的數必從 $N - 1\ (後面補 1)$ 或 $N - 2\ (後面補 00)$ 變來，故得出 $a_n = a_{n-2} + a_{n - 1}$。
不難發現 ${\langle{a_i}\rangle}_{i\in\mathbb{N}}$ 為費式數列，所以這題其實是求費式數列前 $N$ 項的合。

 - ***subtask3***: $40\%$ $N \leq 10^{18}$
這題很沒良心的把 $N$ 開到 $10^{18}$，所以 $O(N)$ 解會 TLE。不過你稍微推導一下 (用類似推導等差級數公式的方法)，不難得出 $\sum_{i = 1}^{N}a_i = a_{N+2} - 1$。
最後再用經典的矩陣快速密求費式數列第 $N + 2$ 項，即可得出所求。

### 相關教學：
[原題教學](https://www.youtube.com/watch?v=3rzKgaVVaL8)
[矩陣快速密教學](https://medium.com/starbugs/find-nth-fibonacci-number-by-fast-doubling-6ac2857a7834)

## **J. 蘋果** ***<font color = '#AAAAAA'> Apple </font>***

> **出題**
> ***ysh***

> **首殺**
> **???**

> **提交次數**
> ******

### ***subtask***: $100\%$ ***As statement***

水，~~比 ***Zebra*** 還水~~


