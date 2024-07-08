# Exercise 10-C: SSSP

Given the following graph, compute the single-source shortest path from `A` to all the other nodes.

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
            <td>A B 2<br>
                A C 3<br>
                A D 3<br>
                B C 4<br>
                B E 3<br>
                C D 5<br>
                C E 1<br>
                C F 6<br>
                D F 7<br>
                E F 8<br>
                F G 9
            </td>
            <td>A -> B = A B<br>
                A -> C = A C<br>
                A -> D = A D<br>
                A -> E = A C E<br>
                A -> F = A C F<br>
                A -> G = A C F G
            </td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise10-C`
