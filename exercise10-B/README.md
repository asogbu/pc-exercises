# Exercise 10-B: Bicolorable

You are to decide whether a given arbitrary connected graph can be bicolored. That is, if one can assign colors (from a palette of two) to the nodes in such a way that no two adjacent nodes have the same color.

You can assume the graph is undirected and strongly connected. You will be given a series of graphs specified by `n` (number of nodes) and `m` (number of edges), followed by `m` pairs of edges.

Input is terminated by `0 0`.

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
            <td>3 2<br>
                0 1<br>
                1 2<br>
                0 0
            </td>
            <td>BICOLORABLE</td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise10-B`
