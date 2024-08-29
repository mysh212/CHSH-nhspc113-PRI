## **A. 最短路** ***<font color = '#AAAAAA'> The Shortest Path </font>***

`time limit` 2s
`memory limit` 512MB

### ***Statement***

給定一個 $N$ 個節點、$M$ 條邊的無向連通圖，每條邊都有一個從 $1$ 到 $M$ 的編號，其中編號 $i$ 的邊連接著兩點 $u_i, v_i$ 。對於圖中的任意兩點，我們將它們之間的路徑長定義為

- 路徑上所有邊的編號直接相連所得的十進位制數字。

請求出從節點 $1$ 到每個其他節點的最短路徑長。由於這些數字可能非常大，請輸出它們對 $10^9+7$ 取模後的結果。

### ***Input***

$N, \  M$
$u_1, \  v_1$
$u_2, \  v_2$
$\vdots$
$u_M, v_M$

### ***Output***

$distance_2$
$distance_3$
$\vdots$
$distance_N$

- $distance_i$ 為節點  $1$ 到節點 $i$ 的最短路徑長並取模後的結果

<div class='page' />


### ***Sample Input***

```
5 4
1 5
5 2
2 3
3 4
```

### ***Sample Output***

```
12
123
1234
1
```

#### **Explanation**

從節點 $1$ 到節點 $2$ 的最短路徑如下：

$1 \rightarrow 5 \rightarrow 2$
邊 $(1, 5)$ 的編號為 $1$ ， 邊 $(5, 2)$ 的編號為 $2$

因此 $distance_2 = 12$

### ***Note***

- $1 \le N , M \le 10^5$
- $1 \le u_i, v_i \le N$

### ***Subtask***

 - ***subtask1***: $3\\%$ $N, M \le 9$
 - ***subtask2***: $28\\%$ $M = N - 1$
 - ***subtask3***: $28\\%$ $N, M \le 10^2$
 - ***subtask4***: $41\\%$ ***As statement***