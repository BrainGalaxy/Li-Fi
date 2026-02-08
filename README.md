# 🔦 Li-Fi Communication Project (C Language)

Li-Fi (Light Fidelity) is a wireless communication technology that uses
LED light instead of radio waves to transmit data.

This project demonstrates a basic Li-Fi system using:
- LED as transmitter
- LDR as receiver
- Embedded C and standard C logic

## 📁 Project Structure
- src/transmitter → LED data transmission
- src/receiver → Light data reception
- src/pc_receiver → PC-side C simulation
- docs → Project explanation
- circuit_diagram → Hardware connections

## 🛠 Technologies Used
- Embedded C
- Arduino IDE
- Standard C

## 📌 Applications
- Smart homes
- Secure indoor communication
- Hospitals
## How to Run This Project on Your PC (Windows)

This project includes a PC-based C simulation of a Li-Fi receiver.
The actual Li-Fi transmitter and receiver require Arduino hardware.

--------------------------------------------------

STEP 1: Install Required Software

1. Install VS Code:
   https://code.visualstudio.com/

2. Install MinGW (GCC Compiler):
   https://sourceforge.net/projects/mingw/

3. Verify GCC installation:
   Open PowerShell and run:
   gcc --version

--------------------------------------------------

STEP 2: Clone the Project from GitHub

Open PowerShell and run:

git clone https://github.com/your-username/Li-Fi-Project.git
cd Li-Fi-Project

(Replace "your-username" with the repository owner name)

--------------------------------------------------

STEP 3: Go to PC Receiver Folder

cd src\pc_receiver

--------------------------------------------------

STEP 4: Compile the C Program

gcc lifi_receiver.c -o lifi_receiver

--------------------------------------------------

STEP 5: Run the Program

.\lifi_receiver

--------------------------------------------------

STEP 6: Test the Program

Input:
1
Output:
Light Detected : 1

Input:
0
Output:
No Light : 0

--------------------------------------------------

IMPORTANT NOTES

- transmitter.c and receiver.c are Embedded C files
- They must be run using Arduino IDE with hardware
- This PC version is a simulation of Li-Fi working logic

--------------------------------------------------

SUPPORTED PLATFORM

- Windows
- GCC Compiler required

## 👨‍💻 Author
Abhishek


