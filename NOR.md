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
NXF stands for On-Cross-Off, or `1+1` which is two **On**'s together (N), `0+1` or `1+0` which is akin to cross difference, or two indifferences, so (X)... and `0+0` which is two **Off**'s together (F)... Memorizing them in binary order, and going by the first letter of each logic gate you get __**AXONN**__

They only match w/ N-X-F and each gate if you reverse them... and of course i had to do that in order for it to come out catchy and memorable, or else you'd end up with a binary order that doesnt go in order, or a word that doesnt sound catchy, defeating the purpose. This also shows you that trying to reverse them doesnt work! See it for yourself — that is — Try reversing the binary digits so theyre in *descending* order, and youll notice it doesnt match up.

Originally i had tried making a poem to help store them as a rememberance. I even had an image over it to make it a more illustrative. Suffice to say i think this is the native, natural, nicer way.

*Ps. I thought about using `"`, and `$`, and `!`, and, `.`, and, `1`, and, `~`, etc. to symbolize the repeat command @ each line... (since my mind has been on the topic of), but then i realized almost every symbol has, at some point in time, had that function/utility... Historically, especially when you learn about all the history of mathematics and science and all the different symbols they were experimenting with prior to there being standardized operators, etc.. At one time (and perhaps still) peeople used (`"`) exclamation mark - in writing to mean "duplicate the above words here". My point being that all symbols have had a similar utility at one point or another. So mine as well not make it any more confusing than it needs to be. Anyway, with that said im unlikely to make that many chnages to the shell, this is just one of several ideas i want to build into a riddle-esque layer of the shell, sortve like Ebony Riddle Game, but somehow integrated with the shell.*


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


simulate NOR behavior: (~) NOT'ing the result of (|) OR

            X: -----.
            Y: ---. |
                  | |
                  | | `-<o-|OR--.
                  | }---<o-|OR  `-|NOT
                  | |      `------|NOT----X NOR Y
                  | `------|NOT
                  `--------|OR

