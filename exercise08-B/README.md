# Exercise 08-B: Squirrel Hunting

Given a grid of NxN squares where each square indicates the number of squirrels, determine the total number of squirrels in the path that allows you to hunt the most squirrels as you move from the top left to the bottom right by either going down or right:

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
            <td>5<br>
                1 5 2 3 6<br>
                4 3 2 1 2<br>
                3 8 4 2 1<br>
                0 5 2 3 4<br>
                3 1 4 2 1<br>
            </td>
            <td>32</td>
        </tr>
    </tbody>

</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise08-A`
