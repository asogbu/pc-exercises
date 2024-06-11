#!/usr/bin/env node

// Exercise 01-A: Line Totals

const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    terminal: false
});

rl.on('line', (line) => {
    console.log(line.split(" ").reduce((a, b) => Number(a) + Number(b)))
});
