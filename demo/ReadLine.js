/*
    Sample test script.
*/

const Reader = require("../build/Release/reader").Reader;
const ReadLine = new Reader("./input/Lines.txt");

while (ReadLine.HasNextLine()){
    console.log("Next line is: ", ReadLine.ReadLine());
}