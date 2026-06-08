# Caesar (C)

This program encrypts messages using Caesar's cipher, shifting each letter in the plaintext by a given key.

## How it works

- Takes a numeric key as a command-line argument
- Prompts the user for a plaintext message
- Shifts each letter by the key value, wrapping around the alphabet if needed
- Preserves case and leaves non-alphabetical characters unchanged

## Compile & Run
```
gcc caesar.c -o caesar
./caesar 3
```
