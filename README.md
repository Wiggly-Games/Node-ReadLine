# Node-ReadLine
Node-ReadLine is a NodeJS implementation of the `std::getline()` function of C++.

This is useful for situations where you may want to pass a file around to different objects, while keeping track of the current position in the file. When each object returns, the current position within the file will be updated, allowing you to continue reading from the spot where the previous object ended.

# Example
As an example, assume you have a map of maps stored in a plain text file and separated by new lines. This may look something like:
```Key1
SubMapKey1
SubMapValue1
SubMapKey2
SubMapValue2
SubMapKey3
SubMapValue3

Key2
SubMap2Key1
SubMap2Key2
SubMap2Key3
SubMap2Key4

...
```

By using the C++ `getline()` function, we're able to store the current position of where we are within the file while we read, allowing us to easily create each sub-map individually while storing our position within the parent map object.


# Installation
The package can be installed by calling `npm install @wiggly-games/node-readline`

# Usage
The package can be imported within TypeScript by calling:
`import { Reader } from "@wiggly-games/node-readline"`

Alternatively, you can import the package in JavaScript by calling:
`const Reader = require("@wiggly-games/node-readline").Reader`

## Creating the Reader object
The Reader object takes in a single argument, which is the path to the file to be read.
As an example, if your file is named "file.txt", this would be:
`const reader = new Reader("file.txt")`

## Reading Lines
A Reader instance returns two methods:
- HasNextLine(): boolean
- ReadLine(): string

HasNextLine() should be used to check if another line exists within the file, and to close the file once we've reached the end.
ReadLine() will read a single line from the file and return that line's contents.

# Demo
Check out [Demo](/demo/ReadLine.js) for an example usage of the Node-ReadLine module.