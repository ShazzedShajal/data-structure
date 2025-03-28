
Bitwise AND: &
Bitwise OR: |
Bitwise X-OR: ^
Left  Shift: <<
Right Shift: >>

1.  X<<1 (x is multiplied by two)
2.  X>>1 (x is Divided by two)
    3. X<<K ( x . 2^k )
    4. X>>K ( [x / 2^k] )

5.  (X & 1) == 1 , then X is ODD
6.  (X & 1) == 0 , then X is EVEN

7.  (X & (X-1) ) == 0 , Then X is Power of 2
8.  (X & (X-1) ) == True , Then X isn't Power of 2

9.  (X & (1<< i) ) == 0, Then i'th Binary Bit of 'X' is 0   // i indexing start right to left (...2 1 0)
10.  (X & (1<< i) ) != 0, Then i'th Binary Bit is 1


11.
      X= 1'1'01 (13)
changed= 1'0'01 (9)

if you want to change(Flip) i'th bit,
    Then   Changed Number = (X ^ (1<<i) )



12.

    Let, X = 1010
    you have to forcefully Active(0) i'th Bit. ( Solve  it)


13. SUBMASK


    let , X = 101101
    let , Y = 001001

    Y is a Submask of X , if every 1(bit) of Y is definately on X 1(active)

    Condition : if( (X&Y) == Y), then Y is a submask of X.


14. 
    Given, X Xor Y =  , and X&Y = ,
    
            X+Y = ?
            
    
    Ans:  X+Y = X xor Y + 2 * X&Y  

  
