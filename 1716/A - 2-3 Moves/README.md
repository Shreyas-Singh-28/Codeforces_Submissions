<h2><a href="https://codeforces.com/contest/1716/problem/A" target="_blank" rel="noopener noreferrer">1716A — 2-3 Moves</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1716A](https://codeforces.com/contest/1716/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. 2-3 Moves</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are standing at the point $$$0$$$ on a coordinate line. Your goal is to reach the point $$$n$$$. In one minute, you can move by $$$2$$$ or by $$$3$$$ to the left or to the right (i. e., if your current coordinate is $$$x$$$, it can become $$$x-3$$$, $$$x-2$$$, $$$x+2$$$ or $$$x+3$$$). Note that the new coordinate can become negative.</p><p>Your task is to find the <span class="tex-font-style-bf">minimum</span> number of minutes required to get from the point $$$0$$$ to the point $$$n$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ lines describing the test cases follow.</p><p>The $$$i$$$-th of these lines contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$) — the goal of the $$$i$$$-th test case.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the <span class="tex-font-style-bf">minimum</span> number of minutes required to get from the point $$$0$$$ to the point $$$n$$$ for the corresponding test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007137275060610413" id="id007022752857721761" class="input-output-copier">Copy</div></div><pre id="id007137275060610413"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">4</div><div class="test-example-line test-example-line-even test-example-line-4">12</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002548345713061545" id="id005039945163461531" class="input-output-copier">Copy</div></div><pre id="id002548345713061545">2
1
2
4
</pre></div></div></div>