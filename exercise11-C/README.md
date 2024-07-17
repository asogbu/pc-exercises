# Exercise 11-C: Euler Circuit

Given a graph, compute an Eulerian Circuit.

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
            <td>1 2<br>
                1 3<br>
                2 3<br>
                2 5<br>
                2 6<br>
                3 4<br>
                3 6<br>
                4 7<br>
                5 6<br>
                6 7
            </td>
            <td>1 2<br>
                2 3<br>
                3 4<br>
                4 7<br>
                7 6<br>
                6 2<br>
                2 5<br>
                5 6<br>
                6 3<br>
                3 1
            </td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise11-C`
