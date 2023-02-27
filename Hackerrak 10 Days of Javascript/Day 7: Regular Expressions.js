'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function regexVar() {
    // \b validate as a word
    // (a|e|i|o|u) validate vowels
    // [a-z] validate lowercase letters
    // {2,} validate minimal length of 2 plus the first letter
    // \1 validate the first letter is the same at the end
    // \b end word validation
    let re = new RegExp(/\b(a|e|i|o|u)[a-z]{2,}\1\b/);
    return re;
}


function main() {
    const re = regexVar();
    const s = readLine();
    
    console.log(re.test(s));
}
