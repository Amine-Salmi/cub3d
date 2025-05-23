# **Cub3D**  
*My first RayCaster with miniLibX*

---

## **Project Overview**  
Cub3D is a 3D graphics project inspired by the legendary Wolfenstein 3D, the first-ever First Person Shooter. This project implements ray-casting principles to create a realistic 3D graphical representation of a maze from a first-person perspective. Built using C and the miniLibX graphics library, it demonstrates fundamental computer graphics concepts and mathematical applications in game development.

---

## **Features**  
- **Ray-Casting Engine**: Real-time 3D rendering using mathematical ray-casting algorithms.  
- **Textured Walls**: Different wall textures based on orientation (North, South, East, West).  
- **Player Movement**: Smooth navigation using WASD keys and arrow key rotation. 
- **Map Parsing**: Custom .cub file format parser for scene configuration.  
- **Color Customization**: Configurable floor and ceiling colors via RGB values.
- **Window Management**: Proper event handling for window operations. 
- **Error Handling**: Comprehensive validation for map files and configurations.  

---

## **Bonus Features**
- **Collision Detection**: Wall collision system for realistic movement. 
- **Minimap System**: Real-time overhead view of the maze.
- **Interactive Doors**: Openable/closable door mechanics. 
- **Animated Sprites**: Dynamic sprite animations within the environment.  
- **Color Customization**: Configurable floor and ceiling colors via RGB values.
- **Mouse Controls**: Point-of-view rotation using mouse input.

---

## **Getting Started**  
### 1. Installation  
Clone the repository:  
  ```bash
  git clone https://github.com/Amine-Salmi/minishell.git
  cd minishell
  ```
### 2. Build the Project  
Compile the shell:
  ```bash
  make
  ```
### 3. Run the Shell
Execute the minishell:
  ```bash
  ./minishell
  ```

---

## **Usage Examples**
###  Basic Commands
  ```bash
  -  minishell$ pwd
  /home/user/minishell
  -  minishell$ echo "Hello world"
  Hello world
  -  minishell$ ls -la
  ```
### Pipes and Redirection
  ```bash
  -  minishell$ ls | grep .c
  -  minishell$ echo "test" > output.txt
  -  minishell$ cat < input.txt
  -  minishell$ ls >> log.txt
  ```

### Pipes and Redirection
  ```bash
  -  minishell$ export MY_VAR=hello
  -  minishell$ echo $MY_VAR
  hello
  -  minishell$ echo $?
  0
  ```

### Heredoc
  ```bash
  -  minishell$ cat << EOF
  > This is a heredoc
  > Multiple lines supported
  > EOF
  This is a heredoc
  Multiple lines supported
  ```

---

## Resources

- **Learning Resources Used During Development**
  - [**The Linux Programming Interface**](#) by Michael Kerrisk - Comprehensive guide to system programming

- **Additional References**
  - [Bash Manual](https://www.gnu.org/software/bash/manual/)
  - [Unix System Calls](https://man7.org/linux/man-pages/)

---
## **License**
This project is part of the 42 School curriculum.