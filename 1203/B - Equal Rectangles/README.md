<h2><a href="https://codeforces.com/contest/1203/problem/B" target="_blank" rel="noopener noreferrer">1203B — Equal Rectangles</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1203B](https://codeforces.com/contest/1203/problem/B) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Equal Rectangles</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$4n$$$ sticks, the length of the $$$i$$$-th stick is $$$a_i$$$.</p><p>You have to create $$$n$$$ rectangles, each rectangle will consist of exactly $$$4$$$ sticks from the given set. The rectangle consists of four sides, opposite sides should have equal length and all angles in it should be right. Note that each stick can be used in only one rectangle. Each stick should be used as a side, you cannot break the stick or use it not to the full length.</p><p>You want to all rectangles to have equal area. The area of the rectangle with sides $$$a$$$ and $$$b$$$ is $$$a \cdot b$$$.</p><p>Your task is to say if it is possible to create exactly $$$n$$$ rectangles of equal area or not.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 500$$$) — the number of queries. Then $$$q$$$ queries follow.</p><p>The first line of the query contains one integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of rectangles.</p><p>The second line of the query contains $$$4n$$$ integers $$$a_1, a_2, \dots, a_{4n}$$$ ($$$1 \le a_i \le 10^4$$$), where $$$a_i$$$ is the length of the $$$i$$$-th stick.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query print the answer to it. If it is impossible to create exactly $$$n$$$ rectangles of equal area using given sticks, print "<span class="tex-font-style-tt">NO</span>". Otherwise print "<span class="tex-font-style-tt">YES</span>".</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007933360668911136" id="id006278416311983244" class="input-output-copier">Copy</div></div><pre id="id007933360668911136">5
1
1 1 10 10
2
10 5 2 10 1 1 2 5
2
10 5 1 10 5 1 1 1
2
1 1 1 1 1 1 1 1
1
10000 10000 10000 10000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003150883949985883" id="id0036120121676758454" class="input-output-copier">Copy</div></div><pre id="id003150883949985883">YES
YES
NO
YES
YES
</pre></div></div></div>