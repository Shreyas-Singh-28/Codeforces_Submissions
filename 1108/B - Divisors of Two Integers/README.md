<h2><a href="https://codeforces.com/contest/1108/problem/B" target="_blank" rel="noopener noreferrer">1108B — Divisors of Two Integers</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1108B](https://codeforces.com/contest/1108/problem/B) |

## Topics
`brute force` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Divisors of Two Integers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Recently you have received two <span class="tex-font-style-bf">positive</span> integer numbers $$$x$$$ and $$$y$$$. You forgot them, but you remembered a <span class="tex-font-style-bf">shuffled</span> list containing all divisors of $$$x$$$ (including $$$1$$$ and $$$x$$$) and all divisors of $$$y$$$ (including $$$1$$$ and $$$y$$$). If $$$d$$$ is a divisor of both numbers $$$x$$$ and $$$y$$$ at the same time, there are two occurrences of $$$d$$$ in the list.</p><p>For example, if $$$x=4$$$ and $$$y=6$$$ then the given list can be any permutation of the list $$$[1, 2, 4, 1, 2, 3, 6]$$$. Some of the possible lists are: $$$[1, 1, 2, 4, 6, 3, 2]$$$, $$$[4, 6, 1, 1, 2, 3, 2]$$$ or $$$[1, 6, 3, 2, 4, 1, 2]$$$.</p><p>Your problem is to restore suitable <span class="tex-font-style-bf">positive</span> integer numbers $$$x$$$ and $$$y$$$ that would yield the same list of divisors (possibly in different order).</p><p>It is guaranteed that the answer exists, i.e. the given list of divisors corresponds to some <span class="tex-font-style-bf">positive</span> integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$2 \le n \le 128$$$) — the number of divisors of $$$x$$$ and $$$y$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$d_1, d_2, \dots, d_n$$$ ($$$1 \le d_i \le 10^4$$$), where $$$d_i$$$ is either divisor of $$$x$$$ or divisor of $$$y$$$. If a number is divisor of both numbers $$$x$$$ and $$$y$$$ then there are two copies of this number in the list.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two <span class="tex-font-style-bf">positive</span> integer numbers $$$x$$$ and $$$y$$$ — such numbers that merged list of their divisors is the permutation of the given list of integers. It is guaranteed that the answer exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007841448301495347" id="id006227174524958183" class="input-output-copier">Copy</div></div><pre id="id007841448301495347">10
10 2 8 1 2 4 1 20 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0048077269461879024" id="id002782419849761939" class="input-output-copier">Copy</div></div><pre id="id0048077269461879024">20 8
</pre></div></div></div>