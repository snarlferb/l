### Configurations
Logic circuits without memory cells are called *combinational*, which contrasts to *sequential logic* where the Output depends not only on the present Input but also on the history of the Input, i.e. registers and ram modules, etc. Though, actual memory cells in RAM modules use more complex arrangements than simple logic gates. Note, that there's static as well as dynamic forms of ram for trapping the value we intend to store as an electrical signal, which you can learn more about their purposes online. You'll find that DRAM is arranged in a kind of matrix, as it is not at all practical for each cell to be handled individually; each cell consisting of a single MOSFET and a capacitor. The MOSFET acts as a switch that controls access to the capacitor. The capacitor holds the charge representing a bit of data (0 or 1). When a read operation is performed, the charge on the capacitor is sensed by the circuit. During a write operation, the MOSFET connects the capacitor to the bit line, allowing the capacitor to be charged or discharged to store a 1 or 0. This might make more sense when we go over the following.

*P.s. You can see a diagram and entire explanation of a memory cell in [**DRAM here**](../../../a/blob/main/dram.html), or the [**web page here**](https://snarlferb.github.io/a/dram.html)

Theres also a distinction between both combinational and sequential logic—In how they do not change the basic operation of a MOSFET. They do however change the arrangement of MOSFETs within a circuit. In combinational circuits, the Output is a direct function of the current Inputs without any memory of previous states. Logic gates like AND, OR, NOT, etc., are often implemented using MOSFETs. MOSFETs are arranged in such a way that the Output depends only on the current Inputs. In sequential circuits, the Output depends on both the current Inputs and the previous states (history). This involves memory elements like flip-flops, which you can think of as a particular *arrangement*, that which allows the circuit to "remember" previous states (through feedback loops or latches), often by feeding the Output back into the Input through a storage element. It stores the state of the Input until it is changed by another Input.

Note, that npn and MOSFET are two different kinds of transistors. However it will help us establish some things and elaborate on whats going on. If we imagine that we have a device called an "npn" (n-type material (Emitter), p-type material (Base), n-type material (Collector)), w/ two n-type semiconductor materials separated by a thin layer of p-type material. The *npn* is a bipolar device, relying on the movement of both electrons as well the *absence* of the electrons (the term *holes* applied conceptually to represent this) in the atomic lattice (aka crystal lattice), And it is situated like:
```
  ------------------+
 -|  n  |  p  |  n  |+
           +
```
In MOSFETs, the structures are somewhat different from bipolar junction transistors. A MOSFET Inverter switches on and off based on the voltage being applied, and doesnt require a continuous current. When the input voltage is low (close to 0V), the n-channel MOSFET is off, and the p-channel MOSFET is on (And vice versa for when n-channel is on, then the p-channel is off) So their complimentary interaction is through the shared Output node (a kind of voltage divider between Vdd and ground) And we'll explain as we go:
```
               Vdd
                |
                |--[Pull-Up Resistor]-- Output
                |
          ----|>----   (p-channel MOSFET)
         |    Source    |
         |      |       |
         |      |       |
         |     Gate     |
         |      |       |
         |      |       |
         |    Drain     |
                |
                |
   Input ---->---|>---  Output
                |
                |
          ----|>----   (n-channel MOSFET)
         |    Source    |
         |      |       |
         |      |       |
         |     Gate     |
         |      |       |
         |      |       |
         |    Drain     |
                |
               GND
```
"Vdd" represents the positively supplied voltage, and is commonly used in digital circuits to denote the power supply voltage, "V" meaning *voltage* and "dd" signifying the positive rail in a circuit. It is typically connected to the source of the p-channel MOSFET. "GND" stands for *ground*. It represents the reference point in the circuit (0V). In the diagram, GND is connected to the source of the n-channel MOSFET.

Gate is connected to the substrate (or body) of p-type material, separated from the channel region (between the Source and Drain) by an insulating layer of silicon dioxide (SiO₂) That is, the source and drain are connected to the two parts of the n-type wafer. The Source is a terminal where current enters into the MOSFET. The Gate controls the flow of current between the Source and Drain. It's like a switch; And when a voltage is applied to the Gate, it allows current (a conductive channel) to flow between the Source and Drain.

When electrons move, they create an electric current. A positive voltage implies that it'll attract electrons to a given channel. When a high voltage (binary 1) is applied to the Gate, the MOSFET turns on (and vice versa for a binary 0, or "off"). When no voltage is applied to the Gate, the contact area between the p-type and the n-type forms the depletion region-Wherein this zone, free electrons from the n-type layer fill up the holes in the p-type layer, and no free electrons or holes are present. When a situation of equilibrium is reached, the depletion zone of the n-type side becomes positively charged, and the zone of the p-types side becomes negatively charged, and the result of this is the creation of an electric field, serving as a barrier to prevent further exchange of electrons (acting like an insulator). The flow of electricity is haulted at these terminals. However electricity through the Gate forms an electric field attracting free electrons of the p-type layer. This forms a new n-type area near the Gate, serving as a communication between Source and Drain, so that electric current can flow. 

So in a pull-down network (a configuration of circuits), the n-channel MOSFET is used to pull the Output to ground (0V); That is, by applying a positive voltage to the Gate relative to the Source, it creates a conductive path from the Output to ground. Thus the current flows from the Drain to the Source  when the Gate voltage is higher than the Source voltage, and the current flows out from the Output and into the Drain. In a pull-up network, the p-channel MOSFET is used to pull the **Output** to a higher, more positive voltage (Vdd). When the MOSFET is turned on (by applying a lower voltage to the Gate relative to the Source), it creates a conductive path from Vdd to the Output.

Thus the p-channel MOSFET turns on when Gate is sufficiently lower than Source, creating a p-type channel between the Source and Drain, and thus allows current to flow. When it leaves it goes out the Drain towards the Output. That `|>` symbol is the flow of current leaving out of Drain and into the Output.

A low voltage (close to 0V) represents a binary (0). A higher voltage (e.g., 3.3V or 5V) or the "Input" represents a binary (1) or "on". More specifically, our Drain (or even Source, depending on which circuit we're talking about) would be where we take the Output of the logic gate. Now imagine you've understood the mechanisms at play and are just working w/ the IO logic of it now. When you connect the *Output* pin to the *Input*, if you set the "first" *Input* to a "1" it will result in its associated *Output* changing to "1". If the first *Input* is turned off (0), then the *Output* remains as "1", but it also enables the second *Input* to store a "1" at that time as well. In the cases of zero, the Output of an OR gate is "0", if and only if both Inputs are also set to "0". Each Input is controllable of course and can be independently changed. Now you understand what is meant by the term *2-Input logic gate*.

MOSFETs can be arranged in a variety of ways, such as in a MOSFET OR Gate. The complimnetary n-channel and p-channel characteristic remains the same:
```
                  Vdd
                   |
                   |
                 --|--
                |     |
                | PMOS| (p-channel)
          Input A ----|
                |     |
                |     |
                |     |
          Input B ----| PMOS (p-channel)
                |     |
                 --|--
                   |
                 Output
                   |
                 --|--
                |     |
                | NMOS| (n-channel)
          Input A ----|
                |     |
                |     |
                |     |
          Input B ----| NMOS (n-channel)
                |     |
                |     |
                 --|--
                   |
                  GND
```
### Logic Gates

So not only are MOSFETs used to create flipflops, registers, switches, interconnects, multipliers, addrs, power management, control logic, etc., they can also be used to represent logic gates which is what we will be illustrating in the following; The only caveat being that we've abstracted away the details of the physical logic circuit. In this context, the "Inputs" are the voltages applied to the gates of the MOSFETs, and the "Output" is the resulting voltage that appears at the Drain.
```
       X -----.
              |
              | `-<o-|OR--.(Q)
              |
       Y -----'
```
In this diagram, X and Y are the Inputs to the OR gate, and Q is the Output. The voltage levels applied to X and Y determine the Output Q. If either Input is high (1), the Output Q will be high (1). When both Inputs are set to (0), the Output will be (0), as neither N-channel MOSFET is conducting to pull the Output down, and the P-channel MOSFET is not enough to overcome this condition. These diagrams are meant to be simple. Before we look at the rest of the art, I thought of an easy way to remember these 2-Input logic gates (the `rev` has utility too, it means *reverse the binary digit to match the NXF gate order* which i'll explain)
```
        NXF
rev (   001   # AND
        010   # XOR
        011   # OR
        100   # NOR
        110   # NAND
```
NXF applies to each number from left-to-right. It stands for On-Cross-Off... That is, (N--) is `1+1` which is the result of two **On**'s together, (-X-) is `0+1` or `1+0` which is akin to two indifferences i shorten to a cross difference... and (--F) is `0+0` which is the result of two **Off**'s together. Memorizing them in binary order, and looking at the first letter of each logic gate going down you get **AXONN**

Of course there's a caveat—they only match w/ N-X-F if I reversed them... so "rev" is applicable to the right-to-left re-ordering of each set of numbers. And of course, i had to do this for reasons of it being more catchy and memorable, else you'd end up with a binary order that doesnt go in order, or a word that doesnt sound catchy, which defeats the purpose. This also shows you that trying to reverse them (from this state) DOESNT work, les' they appear in an order that doesnt go in order at first sight... See it for yourself —that is—Try reversing the binary digits themselves (where theyd appear in *descending* order) and youll notice it doesnt match up correctly.

A combination of AND plus OR together might look like this:
```
     X --.
         |
         |`-<o-|AND--.
         |            |
         |            `-<o-|OR--.(Q)
     Y --'            |
                      |
     Z ---------------'
```
Here's an illustration of a "half adder"...

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

