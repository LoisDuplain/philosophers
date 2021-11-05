<h1 align="center">👴🏻 philosophers 🍴</h1>

<p align="center">
  <a href="https://fr.wikipedia.org/wiki/MacOS_Mojave" target="_blank">
    <img alt="platform: osx 10.14.x" src="https://img.shields.io/badge/platform-osx%20v10.14.x-red?style=flat-square"/>
  </a>
  <a href="https://fr.wikipedia.org/wiki/C_(langage)" target="_blank">
    <img alt="language: c" src="https://img.shields.io/badge/language-C-purple?style=flat-square"/>
  </a>
  <a href="https://profile.intra.42.fr/users/lduplain" target="_blank">
    <img alt="42 login: lduplain" src="https://img.shields.io/badge/42%20login-lduplain-2DD57B?style=flat-square"/>
  </a>
</p>

<p align="left">
  Philosophers is a simulation project written in C to discover threads and mutexes. <br>
  <br>
  One or more philosophers are sitting at a round table either eating, either thinking, either sleeping. <br>
  While they are eating, they do not think or sleep. <br>
  While thinking they don’t eat or sleep and while sleeping, they do not eat or think. <br>
  <br>
  The philosophers sit at a circular table with a large bowl of spaghetti in the center. <br>
  There are some forks on the table. <br>
  Serving and eating spaghetti with a single fork is very inconvenient, so the philosophers will eat with two forks, one for each hand. <br>
  <br>
  Each time a philosopher finishes eating, they will drop their forks and start sleeping. <br>
  Once they have finished sleeping, they will start thinking. <br>
  The simulation stops when a philosopher dies. <br>
  <br>
  Created by Loïs Duplain. (42login: lduplain, 42mail: lduplain@student.42lyon.fr)
</p>

<h2 align="left">🏗️ Compile</h2>
<p align="left">To basically compile program:</p>

```bash
make
```

<p align="left">To recompile entire program:</p>

```bash
make re
```

<p align="left">To clean all *.o in project:</p>

```bash
make clean
```

<p align="left">To clean all *.o and compiled program in project:</p>

```bash
make fclean
```

<h2 align="left">▶️ Run</h2>
<p align="left">To run and see usage:</p>

```bash
./philo
```

<p align="left">Result:</p>

```bash
Usage:
	./philo <number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> [number_of_times_each_philosopher_must_eat]
		Example = ./philo 5 800 200 200
	
	Optional number_of_times_each_philosopher_must_eat:
		Example = ./philo 5 800 200 200 5
```

<p align="left">Default simulation:</p>

```bash
./philo 5 800 200 200
```

<p align="left">The philosopher should not eat and die:</p>

```bash
./philo 1 800 200 200
```

<p align="left">No one should die and simulation should stop when all philosophers has eaten 7 times:</p>

```bash
./philo 5 800 200 200 7
```

<p align="left">To count how many times a philsopher has eaten:</p>

```bash
./philo 5 800 200 200 7 | grep "? is eating" | wc -l	(replace "?" by a philosopher ID)
```

<p align="left">To test simulation optimization:</p>

```bash
./philo 4 410 200 200			(No one should die)
```

<p align="left">My code is well optimized so this should work:</p>

```bash
./philo 4 401 200 200			(No one should die)
```

<h2 align="left">🖥️ 42</h2>

<a href="https://github.com/LoisDuplain/42cursus/blob/master/philosophers/philosophers.pdf">Subject</a>
<p align="left">
  Mark:
  <img alt="42-project-mark" src="https://badge42.herokuapp.com/api/project/lduplain/Philosophers"/>
</p>

<h2 align="left">⚖️ Copyright</h2>
<p align="left">
  Loïs Duplain (lduplain) © 2021
</p>