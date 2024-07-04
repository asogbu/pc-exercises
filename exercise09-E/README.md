# Exercise 09-E: BST Balanced

Given a binary search tree, determine if the tree is balanced:

- Left sub-tree is balanced
- Right sub-tree is balanced
- Difference between heights of left and right sub-trees is no more than 1

```
[5
    [3
        [1]
        []
    ]
    [6
        []
        [7]
    ]
]
```

<table>
    <thead>
        <tr>
            <th>Input</th>
            <th>Output</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>5 3 6 1 7</td>
            <td>Balanced</td>
        </tr>
        <tr>
            <td>5 3 1</td>
            <td>Unbalanced</td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise09-E`
