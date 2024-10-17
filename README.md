tinyCaesar
================


A minimalistic Caesar Cipher implementation in JavaScript.


Description
------------


tinyCaesar is a lightweight, easy-to-use Caesar Cipher encryption and decryption tool.


Features
--------


- Encrypt and decrypt strings using Caesar Cipher method
- Adjustable shift factor for customizable encryption
- Small footprint, ideal for embedded applications


Usage
-----


Encryption


const tinyCaesar = require('./tinyCaesar');

const plaintext = 'Hello, World!';
const shift = 3;
const ciphertext = tinyCaesar.encrypt(plaintext, shift);
console.log(ciphertext); // Output: Khoor, Zruog!



Decryption


const tinyCaesar = require('./tinyCaesar');

const ciphertext = 'Khoor, Zruog!';
const shift = 3;
const plaintext = tinyCaesar.decrypt(ciphertext, shift);
console.log(plaintext); // Output: Hello, World!
