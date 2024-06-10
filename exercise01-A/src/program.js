#!/usr/bin/env node

const readline = require('node:readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    terminal: false
});

rl.on('line', (line) => {
    console.log(line.split(" ").reduce((a, b) => Number(a) + Number(b)))
});
