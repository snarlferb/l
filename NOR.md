### Logic Gates
Before looking at the ascii art, I thought of a stupid easy way to remember your 2-input logic gates, look... (the `rev` has utility, it means reverse the binary digit to match the NXF gate order)
```
        NXF
rev (   001   # AND
        010   # XOR
        011   # OR
        100   # NOR
        110   # NAND
```
NXF applies to each number from left-to-right. It stands for On-Cross-Off (or `1+1` which is two **On**'s together (N)), `0+1` or `1+0` which is akin to cross difference, or two indifferences (X)... and `0+0` which is two **Off**'s together (F)... Memorizing them in binary order, and going by the first letter of each logic gate you get __**AXONN**__

They only match w/ N-X-F if you reverse them... so "rev" is applicable to the right-to-left re-ordering of each set of numbers. And of course, i had to do this for reasons of it being more catchy and memorable, else you'd end up with a binary order that doesnt go in order, or a word that doesnt sound catchy, which defeats the purpose, no?... This also shows you that trying to reverse them DOESNT work, les' they appear in an order that doesnt go in order at first sight... See it for yourself —that is—Try reversing the binary digits themselves (where theyd appear in *descending* order) and youll notice it doesnt match up correctly.

Originally i had tried making a poem to help store them as a rememberance. I even had an image over it to make it a more illustrative. *eh, `*shrugs*`

Here's an illustration of a "half adder" using ascii art...

    X: -----.
    Y: ---. |
         | | `-<o-|XOR--.(S)
         | }---<o-|     |
         | |     `------|&&--X&Y
         | `------|&&
          --------|&&

The first end wire represents the XOR operation for the Sum (S)
The second end wire labeled (X&&Y) represents the AND operation for the Carry (C)
Next, let's demonstrate the expression  X'*Y'+Y*Z  and simulating AND-OR behavior.

           X: -----.
           Y: ---. |
           Z: -. | |
                 | | `-<o-|&&--.
                 | }---<o-|&&  `-|OR
                 | |          ,--|OR----X'*Y'+Y*Z
                 | `------|&&-'
                 `--------|&&

X′ represents the negation (NOT) of X..... Y′Y′ represents the negation (NOT) of Y..... X′⋅Y′X′⋅Y′ represents the logical AND of the negation of X and the negation of Y..... Y⋅XY⋅Z represents the logical AND of Y and Z..... The final result is the logical OR of X′⋅Y′X′⋅Y′ and Y⋅ZY⋅Z


Simulating NOR behavior: (~) NOT'ing the result of (|) OR

            X: -----.
            Y: ---. |
                  | |
                  | | `-<o-|OR--.
                  | }---<o-|OR  `-|NOT
                  | |      `------|NOT----X NOR Y
                  | `------|NOT
                  `--------|OR

