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

For multi-digit numbers, try as i might the only way to do it that we know of is using this same exact recipe,
that is, you ask (for example) how many times does `11` go into `2725`, or if you have `431,861 / 1049`, how
many times does the entire `1049` fit into some portion of the dividend. One day someone might figure out
another way to do it, but thats the best they've got. There's probably a way like i thought where you
slice it continuously and guesstimate towards it, but you still need some trick to weeve through the
guesstimations, that is, you need some informed way to navigate it, otherwise you fall back down to
multiplying one number greater than your current magic number to verify how close it is.
