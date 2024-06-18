# Exercise 05-A: Lotto

In the German Lotto you have to select 6 numbers from the set `{1, 2, ..., 49}`. A popular strategy to play Lotto - although it doesn’t increase your chance of winning — is to select a subset `S` containing `k` (k > 6) of these 49 numbers, and then play several games with choosing numbers only from `S`.

For example, for `k = 8` and `S = {1, 2, 3, 5, 8, 13, 21, 34}` there are 28 possible games: `[1,2,3,5,8,13]`, `[1,2,3,5,8,21]`, `[1,2,3,5,8,34]`, `[1,2,3,5,13,21]`, `...`, `[3,5,8,13,21,34]`.

Your job is to write a program that reads in the number `k` and the set `S` and then prints all possible games choosing 6 numbers only from `S`.

Each line of input contains `k`, followed by the set `S`.

<style>
td {
  vertical-align: top;
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
            <td>7 1 2 3 4 5 6 7</td>
            <td>
                1 2 3 4 5 6<br>
                1 2 3 4 5 7<br>
                1 2 3 4 6 7<br>
                1 2 3 5 6 7<br>
                1 2 4 5 6 7<br>
                1 3 4 5 6 7<br>
                2 3 4 5 6 7
            </td>
        </tr>
    </tbody>
</table>

> Note: Output the sets in sorted order.

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise05-A`
