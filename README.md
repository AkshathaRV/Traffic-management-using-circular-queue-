# Traffic Management Simulation using Circular Queue

## Project Description
This project simulates a smart traffic management system for a three-road junction using circular queues. The simulation is based on real-world traffic data provided in a CSV file. The goal is to determine optimal traffic light timings to improve vehicle flow efficiency.

## Features
- Reads vehicle arrival data from `project4_data.csv`.
- Uses circular queues (array implementation) to manage vehicle movement.
- Simulates traffic light changes and vehicle flow at the junction.
- Dynamically processes vehicle arrivals and departures based on light timing.
- Displays the number of vehicles entering, exiting, and waiting in each road queue.

## File Structure
```
|-- project4_data.csv   # Input data file containing vehicle arrivals
|-- circular_queue_traffic.c  # Main C program implementing the simulation
|-- README.md           # Project documentation
```

## How to Compile and Run
### Compilation
Use a C compiler such as `gcc`:
```bash
gcc circular_queue_traffic.c -o traffic_sim
```

### Execution
Run the program with:
```bash
./traffic_sim
```
Ensure that `project4_data.csv` is in the same directory as the executable.

## Input Format
The input CSV file (`project4_data.csv`) follows this format:
```
Road,Vehicle,Time
Road 1,Vehicle 102,0.48
Road 2,Vehicle 203,0.10
... (more data)
```
- **Road**: The road on which the vehicle arrives.
- **Vehicle**: Unique identifier for the vehicle.
- **Time**: Arrival time in seconds.

## Functionality Overview
- **Circular Queue Operations**:
  - `enqueue()`: Adds a vehicle to the queue.
  - `dequeue()`: Removes a vehicle from the queue.
  - `isFull()`: Checks if the queue is full.
  - `isEmpty()`: Checks if the queue is empty.
- **Simulation Logic**:
  - Reads traffic data from the file.
  - Enqueues vehicles based on their arrival times.
  - Simulates vehicle departures when the traffic light changes.
  - Rotates the traffic light between the three roads every set interval.

## Possible Enhancements
- Implement a linked list-based circular queue for better dynamic memory management.
- Add real-time visualization of traffic flow.
- Implement adaptive traffic light timing based on real-time congestion.



