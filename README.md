# dsoft-hoanghn
# CppTestOnline_Test2
link reposity:  https://github.com/dsoft-hoanghn/TestCpp2.git
## Question 2
Write a funtion when passed list or target sum return efficiently with respect to time to used, two distinct zero-based indices of any two of the numbers, whose sum is equal to the target sum. if there are no two number the funtion should return (-1,-1).
for example fintwosum({3,1,5,7,5,9}, 10) should return a std :: pair<int,int> containing any of the following pair of the indices:
0 and 3 (or 3 and 0) as 3+7 =10;
1 and 5 (or 5 and 1) as 1 + 9 = 10;
2 and 4 (or 4 and 2) as 5 + 5 = 10;
## Installation
Int the terminal of your linux
- Check if your operating system has built-in gcc or g ++ compiler with the command:
```sh
which gcc
which g++
```
If the results return means we have the compiler, otherwise if there is no message, we must type the following command to proceed with the installation.
```sh
sudo apt-get install build-essential
```
## Run program
To build this program we use the command
- Question 2
```sh
g++ question2.cpp -o question2.exe
./question2.exe
```
## Expected result
- Question 2
when the input findTwoSum({3, 1, 5, 7, 5, 9},10)
So The output to the screen is: 0 3


