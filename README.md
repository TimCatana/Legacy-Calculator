# **CIS*3250 Legacy Calculator** 🧮

---

## Authors
Original legacy code was provided by the instructor of CIS*3250 (Software Design III).<br>
<br>
This was made in collaboration with: <br><br>
&nbsp; &nbsp; &nbsp; *Timothy Catana*<br>
&nbsp; &nbsp; &nbsp; *Evan Vrkljan*<br>
&nbsp; &nbsp; &nbsp; *Dylan So*<br>
&nbsp; &nbsp; &nbsp; *Mobolaji Akinyanbola*<br>
&nbsp; &nbsp; &nbsp; *Saqif Abrar*<br>
&nbsp; &nbsp; &nbsp; *Brettan Cutchall*<br>
&nbsp; &nbsp; &nbsp; *Kurtis Hoover*<br>

## OS
<br>
- Linux

## Contents
<br>


&nbsp; &nbsp; &nbsp;[***Building***](#Building-🔨)
<br>

&nbsp; &nbsp; &nbsp;[***Usage***](#Basic-Usage-&-Examples-⛹️)
<br>

&nbsp; &nbsp; &nbsp;[***Functionality***](#Functionality-✔️)
<br><br><br>

# ***Building*** 🔨

---
Once you have cloned the repo to your own system you can call the following commands to build the project.

## *make*
Calling this command will run the default make operation of ***make calc***.

## *make calc*
This command runs the build process for building all of the C files and creating an executable file called *calculator*.

## *make clean*
Calling ***make clean*** will clean any object files or the current ***calculator*** executable from the project folder.


<br><br><br>

# ***Basic Usage & Examples*** ⛹️

---

For using the program make sure you run a terminal in the same directory as the project folder and run the command:<br>
```
./bin/calc
```
<br> Doing so will run the program assuming you have run the commands for making the executable. (see [***Building***](#Building-🔨) section if you have not done so).<br><br>
When running the program your terminal should look like this:
```
======
Menu
======
1.Regular Calculator
2.Scientific Calculator
3.Acountant Calculator
4.Read Help and Notice
0.Exit
Select Menu: 
```
This is the program menu, from here you can select what mode you would like to use. Additionally you can select to either quit out of the program or read the help and notice for the program. Selecting options 1-3 will produce one of these screens:<br><br>
1. Regular Calculator
```
======================
Regular Calculator Menu
=======================
1.Add
2.Subtract
3.Multiply
4.Divide
0.Back
Select Menu:    
```
2. Scientific Calculator
```
===========================
Scientific Calculator Menu
===========================
1.Power function
2.Factorial Series
3.Fibonacci Series
4.Sine
5.Cosine
6.Tangent
7.Cosecant
8.Secant
9.Matrix functions
10.Conversion functions
0.Back
Select Menu:   
```
3. Accountant Calculator 
```
===========================
Accountant Calculator Menu
===========================
Please set value first

Enter number of terms: 5
Enter value terms[1]: 1
Enter value terms[2]: 2
Enter value terms[3]: 3
Enter value terms[4]: 4
Enter value terms[5]: 5    
```
In this menu i have already inputed the set to be of 5 terms with the set being {1,2,3,4,5}. After setting the numbers for your data set you will then be presented with this menu for calculations. 
```
===========================
Accountant Calculator Menu
===========================
1.Show maximum value
2.Show minimum value
3.Show average
4.Show range
5.Show median
6.Show mode
7.Show sorted set
8.Create new set
0.Back
Select Menu:   
```

<br><br><br>

# ***Functionality*** ✔️ 

---

Below are the optional modes of the calculator program and their respective functionality of said mode.
##  *Regular Calculator* ➕ 
&nbsp; &nbsp; &nbsp;🔹 Add<br>
&nbsp; &nbsp; &nbsp;🔹 Subtract<br>
&nbsp; &nbsp; &nbsp;🔹 Divide<br>
&nbsp; &nbsp; &nbsp;🔹 Multiply<br>

## *Scientific Calculator* 🧠 

&nbsp; &nbsp; &nbsp;🔹 Power function<br>
&nbsp; &nbsp; &nbsp;🔹 Factorial Series <br>
&nbsp; &nbsp; &nbsp;🔹 Fibonacci Series <br>
&nbsp; &nbsp; &nbsp;🔹 Sine <br>
&nbsp; &nbsp; &nbsp;🔹 Cosine <br>
&nbsp; &nbsp; &nbsp;🔹 Tangent <br>
&nbsp; &nbsp; &nbsp;🔹 Cosecant <br>
&nbsp; &nbsp; &nbsp;🔹 Secant<br>
&nbsp; &nbsp; &nbsp;🔹 Matrix functions<br>
&nbsp; &nbsp; &nbsp;🔹 Conversion functions<br>

## *Acountant Calculator* 🧾 
&nbsp; &nbsp; &nbsp;🔹 Show max<br>
&nbsp; &nbsp; &nbsp;🔹 Show min<br>
&nbsp; &nbsp; &nbsp;🔹 Show average<br>
&nbsp; &nbsp; &nbsp;🔹 Show range<br>
&nbsp; &nbsp; &nbsp;🔹 Show median<br>
&nbsp; &nbsp; &nbsp;🔹 Show mode<br>
&nbsp; &nbsp; &nbsp;🔹 Show sorted set<br>
&nbsp; &nbsp; &nbsp;🔹 Create new set<br>



