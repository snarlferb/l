
Here's an illustration of a "half adder" using ascii art...

    X: -----.
    Y: ---. |
         | | `-&lt;o-|XOR--.(S)
         | }---&lt;o-|     |
         | |     `------|&amp;&amp;--X&amp;Y
         | `------|&amp;&amp;
          --------|&amp;&amp;

The first end wire represents the XOR operation for the Sum (S)
The second end wire labeled (X&amp;Y) represents the AND operation for the Carry (C)
Next, let's demonstrate the expression  X'*Y'+Y*Z  and simulating AND-OR behavior.

           X: -----.
           Y: ---. |
           Z: -. | |
                 | | `-&lt;o-|&amp;&amp;--.
                 | }---&lt;o-|&amp;&amp;  `-|OR
                 | |          ,--|OR----X'*Y'+Y*Z
                 | `------|&amp;&amp;-'
                 `--------|&amp;&amp;

X′ represents the negation (NOT) of X.
Y′Y′ represents the negation (NOT) of Y.
X′⋅Y′X′⋅Y′ represents the logical AND of the negation of X and the negation of Y.
Y⋅XY⋅Z represents the logical AND of Y and Z.
The final result is the logical OR of X′⋅Y′X′⋅Y′ and Y⋅ZY⋅Z


simulate NOR behavior: (~) NOT'ing the result of (|) OR

            X: -----.
            Y: ---. |
                  | |
                  | | `-&lt;o-|OR--.
                  | }---&lt;o-|OR  `-|NOT
                  | |      `------|NOT----X NOR Y
                  | `------|NOT
                  `--------|OR

one more...

    X: -----.
    Y: ---. |
         | | `-&lt;o-|OR--.
         | }---&lt;o-|     |
         | |     `------|&amp;&amp;--.
         | `------|&amp;&amp;
          --------|&amp;&amp;

The final result is the logical NOR of X and Y

