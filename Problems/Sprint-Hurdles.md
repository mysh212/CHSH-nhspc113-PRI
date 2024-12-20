## **B. 跨欄** ***<font color = '#AAAAAA'> Sprint Hurdles </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

***Omega***  是一位才華橫溢的運動員，他以驚人的彈跳力聞名。在一次特別的跨欄比賽中，他被賦予了一個獨特的挑戰：在一條充滿障礙的跑道上， ***Omega***  必須在精確的 $k$ 步內從起點跑到終點。

然而，這場比賽不僅僅是速度的較量。為了確保他不會因為過大的步幅而拉傷肌肉， ***Omega*** 希望跳躍距離的最大值越小越好，你能幫助她找出最佳策略，讓她成功完成這場挑戰嗎？

具體問題描述如下：

給定一條 $n$ 個單位長的跑道，其中部分單位設有欄架（用 1 表示），其餘單位為空地（用 0 表示）。 ***Omega*** 第一步踏在最左端起跑點，接著每一步找到合適的落腳點空地，在第 $k$ 步恰好抵達最右端的終點。特別注意 ***Omega*** 不會原地踏步。

你的任務是幫助  ***Omega***  計算，在滿足恰好用 $k$ 步到達終點的條件下，最大步長的最小值是多少。
![istockphoto-941359830-612x612](https://hackmd.io/_uploads/B1kV8EqjC.jpg)
註：青蛙跳躍方向與題目無關



### ***Input***
- 第一行包含兩個整數 $n$ 和 $k$，分別表示跑道的長度和步數。
- 第二行包含長度為 $n$ 的字串 $s$ ，其中 $s_i$ 表示第 $i$ 個單位跑道的狀態。`0`表示空地，`1`表示該位置有欄架。（起點與終點不會有欄架。且保證空地數量大於或等於 $k$）


### ***Output***
輸出一個整數，表示 ***Omega*** 在使用步數恰好為$k$的情況下，最大步長的最小值。


<div class='page' />


### ***Sample Input***
```txt
10 4
0100101000
```


### ***Sample Output***
```txt
4
```


### ***Note***

範測1，採取此策略 $1 \rightarrow 4 \rightarrow 6 \rightarrow 10$ ，最大步長為 $max(4-1, 6-4, 10-6) = 4$

 - $2 \leq n \leq 10^5$
 - $2 \leq k \leq n$

### ***Subtask***

 - ***subtask1***: $13\\%$ $1 \leq n \leq 15, 2 \leq k \leq 5$
 - ***subtask2***: $87\\%$ ***As statement***