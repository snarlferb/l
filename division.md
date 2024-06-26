### Where does long division work, and where does it breakdown?
## 528 / 2

So we are looking at it as if the `2` is on the left, and we are positing...

... ... *"how many times does (2) go into `528`,       lets see..."*

- `2` goes into `5`, (2x) ...                  _2_ _ _ _
- Then you multiply the top by the divisor
-  |_2_ _ _ _|
- `2 * 2` = `4`, so..`5 - 4` =  ... *(1 left over)*
- *(next digit)*
- now bring down the 2 from 528,   `(12)`

- *"how many times does (2) go into `(12)`"*
- `2` goes into `12`, (6x)  ... ...            _2_6_ _ _
- Then you multiply the top by the divisor
-  |_2_6_ _ _|
- `2 * 6` = ...        ...     *(12 left over)*
- `(12) - 12` = ... `0` ...
- *(next digit)*
- now bring down the 8 from 528,   `(08)`

- *"how many times does (2) go into `(08)`"*
- `2` goes into `8`, (4x)                      _2_6_4_ _
- Then you multiply the top by the divisor
-  |_2_6_4_ _|
- `4 * 2` =            ...    *(8 left over)*
- `(08) - 8`= ... `0`  ... ...              **264**  is the answer.



### Next do...
## 432,861 / 1049

Hm.. How would you go about this?.. What about asking,
*"how many times does some does some Magic number, either a least common or greatest common divisor,
go into 1049 as well as 432,861"*... that can atleast chisel them down a bit...

- 2 * 200,000 = 400,000
- 2 * 500     = 1000 ...    and thats where i would start with this, using some magic number get closer to finding how they divide together.

You're still using multiplication to get to where you want, but thats fine.
Ive thought about possible other tricks, and they just end up being just as long as it would take you to guess-timate like this.


What's really good about this technique, is that you dont hav to keep track of your magic numbers you've been using to guesstimate...
if they dont work, you simply discard them and keep replacing them over and over until you have a number that is closer to
dividing into both numbers (in the way you want) - that number btw being your **answer**...

At that point its just about multiplying decimals... For example, if you have TWO COMMON decimal numbers, then thats your *answer*.
Otherwise you are still in the process of guesstimating and discarding numbers in the process of equivalence... Its up to you how many
decimal points over you want to go...

In C, a double floating point variable typically conforms to the IEEE 754 standard for double-precision floating-point format.
This format uses 64 bits to represent a number, with: 1 bit for the sign, 11 bits for the exponent and 52 bits for the significand (mantissa),
plus an implicit leading 1 bit.

This provides a precision of about 15 to 17 significant decimal digits. So, while you can represent a wide range of numbers,
the precision of a double is such that it can accurately represent numbers with up to approximately 15 to 17 decimal places.
(Beyond that is a land of rounding errors and precision loss) So if for some reason you want to beat the computer,
you should go 17 decimal places in.
