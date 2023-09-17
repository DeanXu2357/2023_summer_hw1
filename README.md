測驗 
α
搭配 Linux 核心原始程式碼巨集: container_of, Linux 核心的紅黑樹

考慮 S-Tree名稱沒特別意思，不用去Google搜尋 是個嘗試兼具 AVL tree 和 red-black tree 部分特性的 binary search tree (BST) 實作，著重在快速的 insert/delete 操作且合理的 lookup 速度。

測試情境為:

隨機插入 0 到 98 之間的數值到 S-Tree，操作 100 次
自 S-Tree 移去 0 到 98 之間的隨機數，操作 100 次
參考輸出如下:

[ After insertions ]
0
4
7
9
10
12
13
14
15
16
17
18
20
21
22
24
26
27
29
34
35
36
38
40
42
43
44
46
48
50
51
54
55
56
57
58
64
66
67
69
70
74
76
77
78
79
80
81
84
85
87
91
92
94
95
97
98
Removing...
52  65  76  30  44  90  16  70  14  93  
80  12  93   6  67  70  48  32  40  89  
31  90  10  42  75  75  42   5  20  37  
80  72   1  57   2  45  47  16  17  61  
10  95  73   4   2  39  73  48  71  14  
39   3   5  47  45  78  21  85  81  42  
23  62  13  22  19  13  68  66  30  83  
26  38  77  97  43  79  37  15  26   7  
27  65   8  32  14  51   9  35  38  88  
75  59  51  87  82  68  98  51  33  27  

[ After removals ]
0
18
24
29
34
36
46
50
54
55
56
58
64
69
74
84
91
92
94
注意到以下特性:

節點內含數值由小到大輸出
[ After removals ] 的輸出不包含 Removing 指定的數值
程式碼執行時，不會觸發任何 assertion
原始程式碼可見 main.c (部分遮蔽)

作答規範:

AAAA, BBBB, CCCC, DDDD, EEEE, FFFF, GGGG 均該包含 st_ 開頭的函式或巨集，且不包含 ; 字元
補完程式碼，使其運作符合預期
必須符合 .clang-format 規範的程式碼排版風格
以最精簡的形式撰寫
延伸問題:

解釋上述程式碼運作原理
指出上述程式碼可改進之處，特別跟 AVL tree 和 red-black tree 相比，並予以實作
設計效能評比程式，探討上述程式碼和 red-black tree 效能落差