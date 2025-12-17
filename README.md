# Arduino-button-controlled-RGB-light

This project demonstrates how to control an RGB LED using three separate buttons, each one affecting a different colour channel. It is designed for use with an Arduino and requires no external libraries.

## Requirements

- 1 RGB LED  
- 1 × 220Ω resistor for the LED’s common negative  
- 3 push buttons  
- 3 × 10KΩ resistors (one for each button)  
- 1 breadboard  
- Jumper wires  

## Description

Each button controls one of the RGB LED’s colour channels (red, green, and blue).  
Every time a button is pressed, it increases its corresponding colour value by **255/5**.  
After **five presses**, that colour channel reaches its maximum non‑zero level.  
A sixth press resets that channel back to **0**, starting the cycle again.

Because each channel has **5 non‑zero intensity levels**, the total number of possible colour combinations is:

- **5 × 5 × 5 = 125 colours**  
- **126 if the LED being completely off is counted as a colour**

This project is ideal for experimenting with digital inputs, colour mixing, and simple state cycling. You can expand it further by adding debounce logic, combining channels, or implementing smoother transitions.
