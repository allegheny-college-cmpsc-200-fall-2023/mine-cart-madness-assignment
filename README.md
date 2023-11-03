# CMPSC 200: Mine Cart Madness

| Date              |          |
|:------------------|:---------|
| 31 October 2023 | Assigned  |
| 10 November 2023| Due, end of lab       |
| Status           | [![GatorGrader](../../actions/workflows/main.yml/badge.svg)](../../actions/workflows/main.yml) |


## Learning objectives

* explain how `malloc` and `free` interact with the heap leve of the memory hierarchy
* identify and describe pointer variables and how they benefit `C` language programs
* demonstrate the process of referencing and dereferencing basic pointers
* implement linked-list structures to create and manage complex heap-based memory programming

## Introduction

### `teleporter`

Complete this work in [teleporter/main.c](teleporter/main.c).

Have you ever wanted to move numbers around with your _mind_? New moon-based technology makes that happen. In this training exercise, you'll practice basic principles of `pointer`-based teleportation.

### `passcode`

Complete this work in [passcode/main.c](passcode/main.c).

We need to bury a passcode deep in our devices to retrieve it when it's our time to head to the moonbase. Here, we'll take a look at how we can allocate memory directly to the unorganized, but helpfully obfustcated `Heap`.

### `cart-training`

Complete this work in [cart-training/main.c](cart-training/main.c).

Once you show up to work, as the saying goes, it's work time. To operated moon rock mining carts, you'll need to make short `trains` of them. Here, we'll look at a structure called a `linked list` which gives us the power to couple mining cars to sent into the moon rock mine.

### Lab: `cart-corral`

Complete this work in [cart-corral/main.c](cart-corral/main.c).

> We've got to move some microwave radars; special moon rock delivery. We've got to move these lunar samples; we've got to move these specimen ids.
>
> Lunar Straits

There are multiple parts to this lab. Please read carefully.

#### Part 1

As the saying goes, where there's opportunity, there's a train of lunar moon rock carts to carry it away. In fact, there _are_ carts which should be implemented as `struct`s with the fields:

|Field |Type | Purpose |
|:-----|:----|:--------|
|`id`|`int`| Stores the id number `0` - `n` of the cart |
|`type`|`char[11]` | Stores the text type of the rock in the cart |
|`weight`|`float`| Stores the weight of the cart in tons |
|`next`| `struct pointer` | Stores the reference to the next cart |

For safety's sake, let's call this `struct cart`.

This task requires you to build a linked-list train for some `n` cars long, each carrying some amount of tonnage of sorted rock. That is: you can trust that each car has only _one_ type of rock associated with it. However, if you look at the main body of our `cart-corral`, there doesn't seem to be any data!

Never fear -- it's _definitely_ there. However, you won't see the variables defined in the program. They exist, though in the form of:

|Pre-existing variable to use| Purpose |
|:---------------------------|:--------|
|`types`                     | Array of the various types of rocks |
|`weights`                   | The weights of the various car loads|

> Hint: this will _more likely than not_ involve a loop and an [if statement](https://diveintosystems.org/book/C1-C_intro/conditionals.html).

There will also be a few instances of `char *` pointers.

#### Part 2

Two functions exist for tracking memory usage in this program. They are:

- `getTotalHeap()`
- `getFreeHeap()`

Neither takes any arguments. Use them as listed above.

`printf` the amount of memory remaining after each new car is added to the train.

#### Part 3

The functions you used in `Part 2` are back! At the end of your program, `free` the memory you've taken up with your train. The number you end up with will matter in the [report](docs/report.md).


#### tl;dr

There are two variables: `types` and `weights` which _already exist_ and can be used _like globals_. (They're not really globals, but they work like them.)

### Assignment "Hacks"

See the `Suggestions` below to challenge yourself to implement a Hack. As always, you are allowed to develop
your own Hack to satisfy this stretch goal. Place the code for the Hack inline with the code in the corresponding
file.

In order to recieve credit for the Hack, you must fill out the [hack.md](docs/hack.md) file located in the
`docs` folder.

#### Long Train Runnin'...backwards

We added `pointer`s to the next car. Can you add pointers to the _previous car_ as well? How does this change the memory used by the program?

#### Most Common Type

Can you figure a way to report the most common type of specimen in all of the carts? It may be harder than it seems and _could_ involve a `struct` specifically made for this purpose.

#### Memento Memori

This is one for the adventurous. 

We know that the device _can_ run out of memory. But to what extremes can we push it to _force it to_? For example, how many train cars would it take to occupy all of the free heap? How would you design an experiment to find out?

You'll probably need some [additional information about how `malloc` handles such a case] (https://diveintosystems.org/book/C2-C_depth/dynamic_memory.html). In your [docs/hack.md](docs/hack.md), document your experimental process.

##### Note

If you do this, it may seem like the device is unresponsive _and_ it may enter a `PANIC` loop. However, if you unplug the device and plug it back in, the Raspberry Pi Pico should reboot and become programmable again.

#### Make it your own

You are free to develop your own "Hack" for this assignment. However, you'll need to be sure to justify the value of your hack clearly!

### Changes to files in `.vscode`

Based on your system setup (refer to your `hello-blinky` assignment), you will need switch out the `.vscode` folder in each exercise with the _last working copy_.

See our [wiki's entry  on "Configuring Assignments"](https://github.com/allegheny-college-cmpsc-200-fall-2023/course-materials/wiki/03-Configuring-Assignments)
for more information.
