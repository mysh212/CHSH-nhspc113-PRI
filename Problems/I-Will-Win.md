## **E. 會贏喔** ***<font color = '#AAAAAA'> I Will Win </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***

在一個遙遠的倉鼠王國裡，有一位國王 $hamster$，他召集具有咒力的術師來到廣場

廣場充滿了術師，這 $1 \sim N$ 個術師分別擁有 $1 \sim N$ 的咒力。

也就是說沒有術師的咒力會等於其他術師 

如 $N=5$ 時 所有術師依咒力表示分別為 $[1,2,3,4,5]$ 沒有術師的咒力會等於其他術師 

國王希望能夠排列這些術師使得從左側可以看到恰好 $K$ 個術師

每一個術師具有的咒力，只有當他左側沒有比它更強的術師時，他的咒力才能被完全釋放，從而被看到。

例如，如果術師的排列依咒力表示為 $[1,3,2,5,4]$，那麼咒力為 $1$、$3$ 和 $5$ 的術師從左側可見，因為他們左側沒有比他們咒力更強的術師。



給定 $N$ 和 $K$，輸出符合條件排列的數量

由於答案可能很大請先 $mod\space 10^9 + 7$。後再輸出 $Ans$

![image](https://hackmd.io/_uploads/BkZHz7qoR.png)






### ***Input***
$N\space K$
### ***Output***
$Ans$

<div class='page' />



### ***Sample Input 1***
```
3 2
```


### ***Sample Output 1***
```
3
```

### ***Sample Input 2***
```
5 5
```


### ***Sample Output 2***
```
1
```

### ***Sample Input 3***
```
20 11
```


### ***Sample Output 3***
```
647427950
```
### ***Note***

$1 \leq N \leq 10^{3}$

$1 \leq K \leq 10^{3}$


### ***Subtask***

 - ***subtask1***: $3\\%$  $N=1$
 - ***subtask2***: $7\\%$  $N=K$
 - ***subtask3***: $11\\%$  $K=1$
 - ***subtask4***: $27\\%$ $1\leq  N \leq 10$
 - ***subtask5***: $52\\%$ ***As statement***


