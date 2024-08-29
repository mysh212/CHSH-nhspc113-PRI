## **F. HARC** ***<font color = '#AAAAAA'> Hiding A Real Capability </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***


給定 $N$ 與4個長度為 $N$ 的字串$s1,s2,s3,s4$
字串將由 ***H A R C*** ，共 $4$ 個字母組成
***Dumbledore*** 可以施展多次黑魔法
進行以下其中一個操作 順序不限
- 如果 $s2[i-1]$ 等於 $s2[i+1]$ 且 $s2[i+1]$ 等於 ‘A’ ，$s1[i]$ 變為 'H' $\forall$ i $\in$ $1 \text{~} N-2$
- 如果 $s3[i-1]$ 等於 $s3[i+1]$ 且 $s3[i+1]$ 等於 ‘R’ ，$s2[i]$ 變為 'A' $\forall$ i $\in$ $1 \text{~} N-2$
- 如果 $s4[i-1]$ 等於 $s4[i+1]$ 且 $s4[i+1]$ 等於 ‘C’ ，$s3[i]$ 變為 'R' $\forall$ i $\in$ $1 \text{~} N-2$
- 如果 $s1[i-1]$ 等於 $s1[i+1]$ 且 $s1[i+1]$ 等於 ‘C’ ，$s4[i]$ 變為 'C' $\forall$ i $\in$ $1 \text{~} N-2$

***meloneater*** 希望你算出經歷多次黑魔法後 $s1$ 最多能有多少字母 ***H***

### ***Input***
$N\space$
$s_1$
$s_2$
$s_3$
$s_4$
### ***Output***
$Ans$


### ***Sample Input 1***
```
4
HRHH
ACAA
RHRR
CACC
```


### ***Sample Output 1***
```
4
```

<div class='page' />


### ***Sample Input 2***
```
3
HCC
ACA
RHR
CAC
```


### ***Sample Output 2***
```
2
```

### ***Sample Input 3***
```
1
A
R
C
H
```


### ***Sample Output 3***
```
0
```
### ***Note***

$1 \leq N \leq 10^{5}$


### ***Subtask***

 - ***subtask1***: $5\\%$  $N=1$
 - ***subtask5***: $95\\%$ ***As statement***


