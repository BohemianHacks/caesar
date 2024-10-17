tinyCaesar: A Caesar Cipher Implementation


Function Signature

function tinyCaesar(t, n) {
  return t.replace(/[a-zA-Z]/g, c => String.fromCharCode((c.charCodeAt(0) + n - (c >= "A" ? 65 : 97)) % 26 + (c >= "A" ? 65 : 97)));
}



Parameters


- t: Input text to be encrypted or decrypted
- n: Shift value (positive for encryption, negative for decryption)


Explanation


The tinyCaesar function uses:


- Regular expressions (/[a-zA-Z]/g) to match all letters
- A callback function (c => ...) to transform each matched letter
- ASCII code manipulation (charCodeAt(0), String.fromCharCode(...)) for shifting
- Modular arithmetic (% 26) to wrap around the alphabet


Example Usage


console.log(tinyCaesar("J", 3));  // Output: "M"
console.log(tinyCaesar("M", -3)); // Output: "J"



Key Points


- Concise and efficient Caesar cipher implementation
- Uses regular expressions and callback functions
- Suitable for simple encryption/decryption tasks, but not recommended for sensitive data due to relative weakness
