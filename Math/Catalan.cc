/*************************************
Catalan数的定义
令h(1)=1，Catalan数满足递归式：h(n) = h(1)*h(n-1)+h(2)*h(n-2) + ... + h(n-1)h(1)，n>=2
该递推关系的解为：h(n) = C(2n-2,n-1)/n，n=1,2,3,...()其中C(2n-2,n-1)表示2n-2个中取n-1个的组合数)
1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796, 
*************************************/