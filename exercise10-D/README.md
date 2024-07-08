# Exercise 10-D: MST

Given the following graph, compute a minimum spanning tree (display total weight and the edges in MST).

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
            <td>24<br>
                A B<br>
                A C<br>
                A D<br>
                C E<br>
                C F<br>
                F G
            </td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise10-D`
