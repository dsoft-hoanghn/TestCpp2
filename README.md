# dsoft-hoanghn
# CppTestOnline_Test2
link reposity:  https://github.com/dsoft-hoanghn/TestCpp2.git
## Question 1
Write the funtion that efficiently with respect to time used, check if the given binary search tree contain agiven value.
## Solution
Using recursive function, if the input value is less than the value of current node then check the left node. otherwise, if the input value is greater than the current node, then perform node test to the right of that node.
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
- Question 1
```sh
g++ question1.cpp -o question1.exe
./question1.exe
```
## Expected result
- Question 1
We give 2 input vectors: 
    Node n1(1, NULL, NULL);
    Node n3(3, NULL, NULL);
    Node n2(2, &n1, &n3);
So The output to the screen is: 0 3

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [dill]: <https://github.com/joemccann/dillinger>
   [git-repo-url]: <https://github.com/joemccann/dillinger.git>
   [john gruber]: <http://daringfireball.net>
   [df1]: <http://daringfireball.net/projects/markdown/>
   [markdown-it]: <https://github.com/markdown-it/markdown-it>
   [Ace Editor]: <http://ace.ajax.org>
   [node.js]: <http://nodejs.org>
   [Twitter Bootstrap]: <http://twitter.github.com/bootstrap/>
   [jQuery]: <http://jquery.com>
   [@tjholowaychuk]: <http://twitter.com/tjholowaychuk>
   [express]: <http://expressjs.com>
   [AngularJS]: <http://angularjs.org>
   [Gulp]: <http://gulpjs.com>

   [PlDb]: <https://github.com/joemccann/dillinger/tree/master/plugins/dropbox/README.md>
   [PlGh]: <https://github.com/joemccann/dillinger/tree/master/plugins/github/README.md>
   [PlGd]: <https://github.com/joemccann/dillinger/tree/master/plugins/googledrive/README.md>
   [PlOd]: <https://github.com/joemccann/dillinger/tree/master/plugins/onedrive/README.md>
   [PlMe]: <https://github.com/joemccann/dillinger/tree/master/plugins/medium/README.md>
   [PlGa]: <https://github.com/RahulHP/dillinger/blob/master/plugins/googleanalytics/README.md>
