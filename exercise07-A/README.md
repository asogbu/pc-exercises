# Exercise 07-A: Cookies

Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie. Each child `i` has a hunger factor `h`<sub>`i`</sub>, which is the minimum size of a cookie that the child will be content with; and each cookie j has a size `s`<sub>`j`</sub>. If `s`<sub>`j`</sub> >= `h`<sub>`i`</sub>, we can assign the cookie `j` to the child `i`, and the child `i` will be content. Your goal is to maximize the number of content children and output the maximum number.

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
            <td>
                1 2 3<br>
                1 1
            </td>
            <td>1</td>
        </tr>
    </tbody>

</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise07-A`
