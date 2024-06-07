# Exercise 02-B: PBB-matched

> Elements of Programming Interviews: Problem 9.3

Write a function that takes as
input a string of only "`{, (, [, ], ), }`"
and returns true if the string is PBB-matched.

Strings which are parens, brackets, and braces matched
(PBB-matched) are given by the following three rules:

1. The empty string, `""`, is a string which is PBB-matched.
2. If `s` is a string which is PBB-matched, then so are `"(" + s + ")"`, `"[" + s + "]"`, and, `"{" + s + "}"`, where `+` denotes string concatenation.
3. If `s` and `t` are PBB-matched string, then so is `s + t`.

Ex: `"()[]{()()}"` is PBB-matched, and `"[}"` is not.

<style>
td {
  vertical-align: top;
  font-family: monospace;
}
</style>

<table>
    <thead>
        <tr>
            <th>Input</th>
            <th>Output</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>()[]{()()}</td>
            <td>()[]{()()}: Yes</td>
        </tr>
        <tr>
            <td>[}</td>
            <td>&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp[}: No</td>
        </tr>
    </tbody>
</table>

> Note, the output should include the input string padded to the right to a length of 10.

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise02-B`
