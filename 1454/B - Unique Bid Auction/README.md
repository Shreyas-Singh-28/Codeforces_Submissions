<h2><a href="https://codeforces.com/contest/1454/problem/B" target="_blank" rel="noopener noreferrer">1454B — Unique Bid Auction</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1454B](https://codeforces.com/contest/1454/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Unique Bid Auction</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a game called "Unique Bid Auction". You can read more about it here: <a>https://en.wikipedia.org/wiki/Unique_bid_auction</a> (though you don't have to do it to solve this problem).</p><p>Let's simplify this game a bit. Formally, there are $$$n$$$ participants, the $$$i$$$-th participant chose the number $$$a_i$$$. The winner of the game is such a participant that the number he chose is <span class="tex-font-style-bf">unique</span> (i. e. nobody else chose this number except him) and is <span class="tex-font-style-bf">minimal</span> (i. e. among all unique values of $$$a$$$ the minimum one is the winning one).</p><p>Your task is to find the <span class="tex-font-style-bf">index</span> of the participant who won the game (or <span class="tex-font-style-tt">-1</span> if there is no winner). Indexing is $$$1$$$-based, i. e. the participants are numbered from $$$1$$$ to $$$n$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of the test case contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of participants. The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$), where $$$a_i$$$ is the $$$i$$$-th participant chosen number.</p><p>It is guaranteed that the sum of $$$n$$$ does not exceed $$$2 \cdot 10^5$$$ ($$$\sum n \le 2 \cdot 10^5$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — the <span class="tex-font-style-bf">index</span> of the participant who won the game (or <span class="tex-font-style-tt">-1</span> if there is no winner). <span class="tex-font-style-bf">Note that the answer is always unique</span>.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008851323336156924" id="id00476048704060381" class="input-output-copier">Copy</div></div><pre id="id008851323336156924">6
2
1 1
3
2 1 3
4
2 2 2 3
1
1
5
2 3 2 4 2
6
1 1 5 5 4 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005157426129420316" id="id0007315242485331186" class="input-output-copier">Copy</div></div><pre id="id005157426129420316">-1
2
4
1
2
-1
</pre></div></div></div>