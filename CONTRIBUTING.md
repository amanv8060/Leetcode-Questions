

# Contributing Guide 

If you are new to opensource and don't know how to contribute to a repository , give [this](https://www.dataschool.io/how-to-contribute-on-github/)	a read . 

You can contribute to this project through couple of ways . 

## Helping with issue database 

These issues have been created with the help of a script , there are chances that an issue description can link to wrong question , feel free to mention in the issue , if you find a disparity . 

> Currently there are approximately 80 duplicates in the issue database , if you happen to find one , please comment to close one of them .


## By adding solutions

You can add solution to a problems , issues  have been created for all free questions available in the list [here](https://github.com/amanv8060/Leetcode-Questions/blob/main/QUESTIONS.md).

### Steps for contributing a solution 

 1. For adding a solution to a problem , comment on the related issue that you are willing to work on that problem .
 2. Once you are assigned the issues  , in your fork , create a new branch named issueNumber. 
 3.  in that branch create  a file named  {questionNumber}.extension inside solutions folder.
 	> For eg : If i would like to create add a solution for Two sum problem in cpp , I will name it as `1.cpp`
 4. Copy your solution class from Leetcode into the file that you just created . 
 5.  If the code is in cpp , add the following two lines at the top of the code 
 
    #include <bits/stdc++.h>
    using namespace std;
 6. Format your file with (Instruction below).
 7. Commit the changes and push them to Github.
 8. Create a pull request named in the format `Adding solution for {question number}`
 9. Update the pull request comment accordingly.
 
> Note : If your pull request doesn't have a proper pull request comment , your pr will be closed. 


### Formatting the files 

#### For Cpp

This repository uses clang-format with `Google` style for formatting the files.

You can check out online articles/tutorials availble on the internet .

> Example usage on Linux

 1. Install `clang-format` 
 
 	  `sudo apt-get install clang-format`
    
 2. In your terminal inside `solutions` folder , run the below command
 
 	  `clang-format -i -style=Google *.cpp`
    
This is just an example , you can use any way to format your code , the formatting should be based on clang-format and should use Google style . 
For eg. You can use [this](http://format.krzaq.cc/) website

#### For Java

This repository uses google-java-format , for instructions on how to setup [Check official docs](https://github.com/google/google-java-format)

As of now , you dont need to format , the action will auto format the code , but later on you would be requried to contibute formatted code.
 
