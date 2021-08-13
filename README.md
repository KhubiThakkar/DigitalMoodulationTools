![TOOL](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/tool.JPG)  

## DIGITAL MODULATION TOOLS v.1.0

# Implementation Video
[Working Video of Program](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Videos/RunningProg.mkv)

# Digital Modulation Tools
|Build| Code Coverage | Unit Testing | Static Analysis | Git Inspector | Memory Leak |
| ----- | ---- | ---- | ---- | ---- | ---- | 
| [![Build - C Compile](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/build.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/build.yml) | [![CI-Coverage](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/gcov.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/gcov.yml) | [![Unit Test - Unity](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/unity.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/unity.yml) |[![Cppcheck - Static Code Analysis](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/cppcheck.yml) |[![Git Inspector - Contribution Check](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/gitinspector.yml)|[![Valgrind - Dynamic Memory Analysis](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/valgrind.yml/badge.svg)](https://github.com/GENESIS2021Q1/sdlc2-team-15/actions/workflows/valgrind.yml) | 

## Status of Online Badges
![online badges passing](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Batches.png)

# Offline Badges
![badges](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Screenshot%20from%202021-07-06%2022-42-31.png)
![badges](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Screenshot%20from%202021-07-06%2022-42-54.png)
![badges](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Screenshot%20from%202021-07-06%2022-44-07.png)
![badges](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Screenshot%20from%202021-07-06%2022-48-10.png)
![badges](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Screenshot%20from%202021-07-06%2022-55-02.png)

## Folder Structure
Folder             | Description
-------------------| -----------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Design`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`         | Documented details of the project
`6_ImagesandVideo` | All the images used in Readme and the working of the application
`7_Other`          | Output files for Test Plans

## Contributors list and Summary
PS Id. |  Name   |    Features    | Issues Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`99005010` | Kavala Tejesh | <li> Database </li> | 0 | 0 |  |  |
`99005011` | Prachi Tanna | <li> Biphase Manchester </li> <li> Differential Manchester </li> <li> Display Waveform </li> | 2 | 2 | 4 | 4 |
`99005012` | Dhyey Shah | <li> ASK </li> <li> Display Analog Waveforms </li>| 3 | 1 | 9 | 9 |
`99005013` | Khubi Thakkar  |  <li> NRZ-I </li> <li> NRZ-L </li> <li> RZ </li> <li> Display Waveforms </li> | 6  | 6 | 13 | 13 | 
`99005014` | Mohammed Rizwan | <li> PSK </li> <li> FSK </li> <li> QAM </li> <li> Display Waveforms </li> | 1 | 1 | 6 | 6 |

## Challeges Faced and how they were over come
Name | Problem | Solution
--- | --- |---
 Mohammed Rizwan| Making a buffer as an input to feed other functions | Changed the return type and passing arguments
 Khubi Thakkar | Changing github credentials in git | By installing an older version of git
 Dhyey Shah | Trying to display waves | Referred to pbPlots
 --|Integrating the code | Continuous 6-8 hours of calls
 Prachi Tanna | Displaying incorrect waveform | Changed the return type 
 Khubi Thakkar | Unable to run Menu option | Used jump logic instead of calling
 Kavala Tejesh | Had problems integrating the dataabase with rest of the team's functions | Added the struct in 

## Learnings From TDLC module
**by Dhyey Shah, Khubi Thakkar, Mohammed Rizwan**
* Testing requires a completely different mindset, it is unlike the debugging you do during writing the code.
* It really requires you to think out of the box and give all sorts of wrong inputs to the code when the list of valid inputs are given, which I personally found very difficult.
* Also usually finding a small bug is followed by a series of bugs, it leads to many changes in the program making it a better quality code.
* Broke our system as well as others and learnt that dealing with all kinds of input is as important as developing a logic.
* Understood the necessity of a strong test plan to make your system more robust.
* Testing the program based on various checks is not enough. We need to test it based on various inputs. (some random and some boundary based).
* The warning ignored in the initial phase can cause big issue afterwards.
* To verify and validate the code as per requirements (learning from peer review)

## Fuzzing Output using libfuzzer
![Fuzzing Output](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Fuzzing/Fuzzing1.jpeg)
![Fuzzing Output](https://github.com/GENESIS2021Q1/sdlc2-team-15/blob/main/6_ImagesandVideo/Fuzzing/Fuzzing2.jpeg)

## Learning Resources
* [Different Modulation Techniques](https://www.electronicdesign.com/technologies/communications/article/21798737/understanding-modern-digital-modulation-techniques)
* [How to plot in C](https://github.com/InductiveComputerScience/pbPlots)

