# BIT -Interpreter Written in C-

## Caution
Part of this sentence is written using goole translation.

## Abstract
``BIT'' is the interpreter language that imitates brainf**k.

## Grammer
There are 8 commands in brainf**k like this.
```
'+' ... Increment this pointer
'-' ... Decrement this pointer
'>' ... Move to the next pointer
'<' ... Move to the previous pointer
'.' ... output this pointer
',' ... get value and assign a value to a pointer
'[' ... If this pointer's value is 0, jump to after the next ']'
']' ... If this pointer's value isn't 0, jump to privious '['
```

In binary, 8 can be represented by 3 bits.

There are 7 command in BIT like this.
```
'001' ... Increment this pointer ( = '+')
'010' ... Decrement this pointer ( = '-')
'011' ... Move to the next pointer ( = '>')
'100' ... Move to the previous pointer ( = '<')
'101' ... output this pointer ( = '.')
'110' ... get value and assign a value to a pointer ( = ',')
'111' ... output "Hello world!!\n"
```

## How to Use?
execute this command.
```
./bit {filename}
```

## Sample
3 pattern of print Hello, world!! (when use command '111')
```
111  ... basic
1 11 ... Other than 0 and 1 are recognized as comments
1a11 ... Other than 0 and 1 are recognized as comments 
```