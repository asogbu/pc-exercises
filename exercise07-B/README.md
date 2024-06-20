# Exercise 07-B: Max Min

Given a list of integers, your task is to select integers from the list such that its unfairness is minimized.
If (x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>k</sub>) are `K` numbers selected from the list `N`, the unfairness is defined as

`max`(x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>k</sub>) - `min`(x<sub>1</sub>, x<sub>2</sub>, ..., x<sub>k</sub>)

where `max` denotes the largest integer among the elements of `K`, and `min` denotes the smallest integer among the elements of `K`.

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise07-B`
