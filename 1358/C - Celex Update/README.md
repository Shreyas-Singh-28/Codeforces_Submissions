<h2><a href="https://codeforces.com/contest/1358/problem/C" target="_blank" rel="noopener noreferrer">1358C — Celex Update</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1358C](https://codeforces.com/contest/1358/problem/C) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">C. Celex Update</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>During the quarantine, Sicromoft has more free time to create the new functions in "<span class="tex-font-style-tt">Celex-2021</span>". The developers made a new function <span class="tex-font-style-tt">GAZ-GIZ</span>, which infinitely fills an infinite table to the right and down from the upper left corner as follows:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/50d992c26f376f2bde3505ba72d122b46ccc6688.png" style="max-width: 100.0%;max-height: 100.0%;"> </center> The cell with coordinates $$$(x, y)$$$ is at the intersection of $$$x$$$-th row and $$$y$$$-th column. Upper left cell $$$(1,1)$$$ contains an integer $$$1$$$.<p>The developers of the <span class="tex-font-style-tt">SUM</span> function don't sleep either. Because of the boredom, they teamed up with the developers of the <span class="tex-font-style-tt">RAND</span> function, so they added the ability to calculate the sum on an arbitrary path from one cell to another, moving down or right. Formally, from the cell $$$(x,y)$$$ in one step you can move to the cell $$$(x+1, y)$$$ or $$$(x, y+1)$$$. </p><p>After another Dinwows update, Levian started to study "<span class="tex-font-style-tt">Celex-2021</span>" (because he wants to be an accountant!). After filling in the table with the <span class="tex-font-style-tt">GAZ-GIZ</span> function, he asked you to calculate the quantity of possible different amounts on the path from a given cell $$$(x_1, y_1)$$$ to another given cell $$$(x_2, y_2$$$), if you can only move one cell down or right.</p><p>Formally, consider all the paths from the cell $$$(x_1, y_1)$$$ to cell $$$(x_2, y_2)$$$ such that each next cell in the path is located either to the down or to the right of the previous one. Calculate the number of different sums of elements for all such paths.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 57179$$$) — the number of test cases.</p><p>Each of the following $$$t$$$ lines contains four natural numbers $$$x_1$$$, $$$y_1$$$, $$$x_2$$$, $$$y_2$$$ ($$$1 \le x_1 \le x_2 \le 10^9$$$, $$$1 \le y_1 \le y_2 \le 10^9$$$) — coordinates of the start and the end cells. </p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, in a separate line, print the number of possible different sums on the way from the start cell to the end cell.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008310661888870305" id="id0021506446433847426" class="input-output-copier">Copy</div></div><pre id="id008310661888870305">4
1 1 2 2
1 2 2 4
179 1 179 100000
5 7 5 7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008638895690762834" id="id001354114123228951" class="input-output-copier">Copy</div></div><pre id="id008638895690762834">2
3
1
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case there are two possible sums: $$$1+2+5=8$$$ and $$$1+3+5=9$$$. <img class="tex-graphics" src="https://espresso.codeforces.com/54f16af83cc4838bce87a408843f620cc45d5ee1.png" style="zoom: 100.0%;max-width: 100.0%;max-height: 100.0%;"></p></div>