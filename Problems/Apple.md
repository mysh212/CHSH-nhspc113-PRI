## **J. 蘋果** ***<font color = '#AAAAAA'> Apple </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

***ysh*** 來到了一片 $k \times k$ 的方形森林，裡面有好多蘋果樹，他發現每顆蘋果都有著屬於自己的美味值，現在 ***ysh*** 想要吃到美味值為 $n$ 的蘋果，你可以告訴他那裡有著這樣的蘋果嗎?

### ***Input***

$n$
$a_{(1,1)}$ $a_{(1,2)}$ ... $a_{(1_k)}$
...
$a_{(k,1)}$ $a_{(k,2)}$ ... $a_{(k_k)}$

### ***Output***

$m$
$x_1$ $y_1$
$x_2$ $y_2$
...
$x_m$ $y_m$

 - $m$ 為輸出筆數，代表在這片森林中，共有幾顆 ***ysh*** 想要的蘋果
 - $1 \leq x_i,y_i \leq k,\ \forall\ 1 \leq i \leq k$
 - 輸出請按照字典序輸出。

<div class = 'page' />

### ***Sample Input***

```
5
7 5 8
2 9 0
5 4 5
```

### ***Sample Output***

```
3
1 2
3 1
3 3
```

### ***Note***

 - $0 \leq n \leq 10^{18}$
 - $0 \leq a_{(i,j)} \leq 10^{18},\ \forall\ 1 \leq i,j \leq k$
 - $0 \leq k \leq 2000$

### ***Subtask***

 - ***subtask1***: $10\%$ $k \leq 1,\ a_{(i,j)} \leq 10,\ \forall\ 1 \leq i,j \leq k$
 - ***subtask2***: $10\%$ $k \leq 100,\ a_{(i,j)} \leq 10^4,\ \forall\ 1 \leq i,j \leq k$
 - ***subtask3***: $10\%$ $k \leq 1000,\ a_{(i,j)} \leq 10^9,\ \forall\ 1 \leq i,j \leq k$
 - ***subtask4***: $20\%$ $k \leq 1000,\ a_{(i,j)} \leq 10^{18},\ \forall\ 1 \leq i,j \leq k$
 - ***subtask5***: $50\%$ ***As statement***