# Exercise 11-B: Passcode Cracking

In an effort to thwart passcode snoopers, the building security team has implemented a new passcode mechanism: instead of entering the whole passcode, the user must enter in three random numbers from the original door code. For instance, if the passcode was `2468135`, the user may be asked to enter in the `2nd`, `4th`, and `5th` numbers: `481`. This shorter sequence (`2nd`, `4th`, `5th`) changes each time, so just watching the someone enter in the door code will not guarantee entry to the snooper. Moreover, it helps prevent divulging the complete passcode.

Being the black hat that you are, however, you decide that this security arrangement is weak and plan on cracking the code to the instructor's office 2. To do so, you have carefully monitored a series of successful entries and recorded them in a text file. **Knowing that the three random numbers are always asked for in order and that the digits in the passcode are unique (due to limitations to the security software), your next step is to analyze these entries and produce the original passcode.**

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
            <td>352<br>
                154<br>
                542<br>
                315<br>
                152
            </td>
            <td>31542</td>
        </tr>
    </tbody>
</table>

### Dredd Testing

`curl -F source=@pbbmatched.cpp https://dredd.h4x0r.space/code/cse-30872-su24/exercise11-B`
