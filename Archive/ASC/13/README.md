[toc]

[https://codeforces.com/gym/100216](https://codeforces.com/gym/100216)
[http://edward-mj.com/archives/1822](http://edward-mj.com/archives/1822)

# Problem A. Generalized Assignment
费用流裸题。

# Problem B. Bandits
海岛分金问题。

有n个海盗和m块钱(1 ≤ n, m ≤ 2000)，他们要分这些钱。

分钱流程如下：先给每个强盗依次记上编号1~n。然后1号强盗提出一个钱的分配方案(也就是指定每个人获得多少钱)。剩下的人(包括1号强盗本身)对这个方案进行投票，如果支持提案的人数严格大于半数人，那么这个方案被通过，大家按数目分钱；而如果不通过，则大家把1号强盗杀掉。剩下的强盗编号都减一，人数减一，再次分钱。

假设强盗们都绝顶聪明，并且他们都认为彼此绝顶聪明。

一个强盗会反对投票，当且仅当他知道当前这个人被投死了以后，他一定会存活下来，并且获得至少和当前提案相当的金币。

现在，请你回答第一个强盗最多能提案分配给自己多少钱而不被杀。如果无论如何都会被杀，输出-1。

# Problem C. Matrix Game

# Problem D. Paper Mosaic
# Problem E. Shortest Path
# Problem F. Cutting Puzzle
问一个三边长分别为 \(a\times b\times c \) 的立方体，最少切多少刀，可以切成一堆 \(1\times 1\times 1\) 的单位矩形。
只考虑一维的话，答案显然是 \( \lceil log_2{n} \rceil \)。每个维度分开讨论，加起来即可。
