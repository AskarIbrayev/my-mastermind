# my_mastermind
----FOR THE REVIEWER----
To compile and execute the code 
1. type make in the terminal
2. to execute type any of the following formats: 
    ./my_mastermind -c code -t attempts
    ./my_mastermind -t attempts -c code
    ./my_mastermind -c code
    ./my_mastermind -t attempts
    ./my_mastermind

NOTE: code is nonrepeating 4 numbers between 0-7
EXAMPLE: ./my_mastermind -c 1234 -t 5
--------------------------

-----GENERAL explanation----
The player has 10 attempts by defaults to find the secret code.
After each input, the game indicates to the player the number of well placed  misplaced pieces.

Pieces will be '0' '1' '2' '3' '4' '5' '6' '7'.

If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code but that is not in a good position.

The players can enter the secret code and number of attempts in following formats,
otherwise random code will be generated and attemps will be 10:
(code and attemts must be written without any "",[] signs)

./my_mastermind -c code -t attempts
./my_mastermind -t attempts -c code
./my_mastermind -c code
./my_mastermind -t attempts
./my_mastermind

The player will be prompted to enter correct 4 distinct numbers if it is out of 1-7