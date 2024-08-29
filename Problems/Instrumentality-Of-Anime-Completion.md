## **D. 新番補完計劃** ***<font color = '#AAAAAA'> Instrumentality Of Anime Completion </font>***

`time limit` 1s
`memory limit` 256MB

### ***Statement***
**張詩大** 決定在暑假期間補完他所有想看的新番。他把每部想看的新番以字串形式記錄，記錄格式為 `動畫名稱;製作公司;首播日期`，其中各項資訊以 `;` 分隔。動畫名稱與製作公司主要由大小寫英文字母組成，且可能包括阿拉伯數字、標點符號、空格 (這裡保證名稱裡不會有 `;` )。首播日期的格式為 `MM/DD`，其中 `MM` 為兩位數的月份，`DD` 為兩位數的日期。

以今年新番《**鹿乃子乃子乃子虎視眈眈**》為例，其記錄格式為：
`My Deer Friend Nokotan;WIT STUDIO;07/07`

**張詩大** 想將相同製作公司製作的動畫分類在一起，並按首播日期排序。如果首播日期相同，則按動畫名稱的字典序 (由小到大) 排序。由於動畫數量較多，他請求你編寫一個程式來完成這項任務。

#### 字典序由小到大排序的規則：
將兩個字串從左到右逐位比較，當發現字元的 ASCII 值不相同時，將 ASCII 值較小的字串排在前面。如果兩字串在所有位置上的字元都相同，則較短的字串排在前面。
![](Images/upload_f818bdc345a3b43156793c95146b976d.jpeg)
![](Images/upload_c164ec39cae1d48854ddb0a37dadf1af.jpeg)



<div class='page' />



### ***Input***
$S_1$
$S_2$
$\vdots$
$S_n$

輸入以 EOF (End of File) 作為結束。

### ***Output***
$C_i$
$A_1$
$A_2$
$\vdots$
$A_i$
$\vdots$

第一行 $C_i$ 為製作公司名稱。

第二行起 $A_i$ 為該公司製作的動畫名稱，這些字串依首播日期輸出，若首播日期相同，則依照動畫名稱字典序由小到大輸出，輸出完一個動畫請換下一行。

輸出完該公司全部動畫後，請輸出 "--------------------------------------------------" 當作分隔線 (需恰好 50 個 `-` )，若之後無任何輸出則不用分隔線 (請參考範測輸出)。

每個製作公司名稱的輸出順序應按照其在輸入中出現的先後順序。



<div class='page' />


### ***Sample Input***
```
Alya Sometimes Hides Her Feelings in Russian;Doga Kobo;07/03
My Deer Friend Nokotan;WIT STUDIO;07/07
Too Many Losing Heroines!;A-1 Pictures;07/14
Oshi no Ko Season 2;Doga Kobo;07/03
Suicide Squad ISEKAI;WIT STUDIO;06/27
Jellyfish Can't Swim in the Night;Doga Kobo;04/07
```

### ***Sample Output***
```
Doga Kobo
Jellyfish Can't Swim in the Night
Alya Sometimes Hides Her Feelings in Russian
Oshi no Ko Season 2
--------------------------------------------------
WIT STUDIO
Suicide Squad ISEKAI
My Deer Friend Nokotan
--------------------------------------------------
A-1 Pictures
Too Many Losing Heroines!
```



### ***Note***
* $9 \leq S.size() \leq 200$
* $S_i \neq S_j\ \ (i \neq j)$
* 總字串數 $\leq 100$
* 保證動畫名稱與製作公司不會留白
* 每部動畫都有唯一的首播日期
* 輸入測資為 MyAnimeList 2024/01/01 ~ 2024/08/31 的新番資訊


### ***Subtask***

 - ***task***: $100\\%$ ***As statement***