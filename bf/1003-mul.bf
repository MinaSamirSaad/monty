,[                       Read the first digit
  ->+++++++[-<-------->]+   Convert ASCII to numerical value (subtract 48)
  <[->+>+<<]            Copy the value to the second cell
  >-                     Subtract 1 from the first digit
  [                      Start multiplication loop
    >+<                  Move to the second cell and add to the first cell
    [->+>+<<]            Double the value in the first cell and copy to the third cell
    >>-                   Subtract 1 from the second digit
    <<[->>>+<<<]         Multiply the first and second digit values
    >>>[->+<<<+>>]       Move the product to the first cell and restore values in the second and third cells
    <<<<-                 Subtract 1 from the first digit
  ]                      End multiplication loop
  >.                     Output the result
]
