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
### 1. Prerequisites
- [Download and build MLX42](https://github.com/codam-coding-college/MLX42?tab=readme-ov-file#download-and-build---mlx42)
- Follow the installation instructions in the repository

### 2. Clone and Build 
Clone the repository and compile:
  ```bash
  git clone https://github.com/Amine-Salmi/cub3d.git
  cd cub3d
  make
  ```
### 3. Run the Game
Execute with a valid .cub map file:
  ```bash
  ./cub3D maps/sample.cub
  ```

---

## **Usage Examples**
###  Controls
  - **Movement**: W, A, S, D keys to navigate through the maze
  - **Rotation**: Left/Right arrow keys to look around
  - **Exit**: ESC key or click the window's red cross to quit

### Sample Map File (.cub format)
  ```bash
  NO ./textures/north_wall
  SO ./textures/south_wall
  WE ./textures/west_wall
  EA ./textures/east_wall 

  F 0,153,76
  C 100,183,230

  11111111111111111111111111111
  10000000001110010000000000001
  10110000011101100000000011111
  10010000000010000000000001111
  11111011101100100110000000001
  10000000001100000111011111011
  11110111111110111000000000011
  11110111111111011101010010N01
  11000000110101011100000010001
  10000000000000001100001110001
  10000000000000001101010010001
  11000001110101011111011110001
  10000111111111111110000000001
  10110111 1110101 101111010001
  11111111 1111111 111111111111
  ```

---

## Game Screenshots
<img src="https://github.com/Amine-Salmi/so_long/issues/1#issue-3088585507" alt="Cub3D Gameplay">
---

## Resources

---
## **License**
This project is part of the 42 School curriculum.
