Note: I dont have an illustration of how to do matrix multiplication... As i find that i make it more confusing than it needs to be...


If anyone thinks that have a good way to represent each step of the matrix multiplication, where each step shows an equation in variable form,
and would like to share it with me, please do. Its easier to represent a matrix in a program than it is to write it out, which is so strange.


If you really want me to show you how to do matrix multiplication i can, i just assumed it would be more confusing to have to look at if you
already have your own method in your head of how it should look and what works best for you.


This is something i was illustrating for Transitive Closure. First youd analyze this kind of cycle/flow chart thing...
![Flobo](images/cycle.jpg)
And you create a table to fill in those paths where each number meet in that cycle/flow chart thing.
```
       dest ->
unnamed=  x | 0 | 1 | 2
      src 0 | 0 | 1 | 1
       |  1 | 0 | 0 | 1
       |  2 | 1 | 0 | 0
```
You take that and put it inside of a matrix called `adj1` *(excluding the very first row and column)*
```
adj1=  0 | 1 | 1
       0 | 0 | 1
       1 | 0 | 0
```
`adj1` multiplied by itself (which requires doing matrix multiplication)

This would imply the following steps: `row(0,1,1) * column(0,0,1) = ax + by + cz ` *(ax, by, cz.. im having represent each multiplication step, which leads to the subsequent addition step... thats what you do in matrix multiplication)*

`0*0=0`, `1*0=0`, `1*1=1` so `row1_col1 = ax+by+cz = 0 + 0 + 1    = 1`
```
adj2=  1 |   |
         |   |
         |   |
```
And then youd fill in the one.... Ill do one more so its clear where the next value goes...

`row(0,1,1) * column(1,0,0) = ax + by + cz`
`0*1=0`, `1*0=0`, `1*0=0` so `row1_col2 = ax+by+cz = 0 + 0 + 0    = 0`
```
adj2=  1 | 0 |
         |   |
         |   |
```
In conclusion, the resulting matrix would be showing you if its possible to make a certain maneuver between a given source and dest, 1 meaning its possible, 0 meaning its not.


You use the term `adj` because of "adjacency matrices", whereby an adjacency matrix is a square matrix used to represent a finite graph. The elements of the matrix indicate whether pairs of vertices are adjacent or not in the graph.*


So even though we multiply this matrix by itself, the result is deducing whether or not those results in `adj2` would be adjacent to `adj1` or not.


And if you find that terribly confusing i apologize, as like i said - I'm hoping i, or someone else will come up with a better way to illustrate this that can clearly portray each step in a nice way, while still being algebraic.
