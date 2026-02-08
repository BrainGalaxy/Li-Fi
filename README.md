# 🔦 Li-Fi Communication Project

Li-Fi (Light Fidelity) is a wireless communication technology that uses **visible light** instead of radio waves to transmit data.

This repository contains:
- A **PC-based Li-Fi receiver simulation**
- **Embedded C code** for transmitter and receiver (Arduino)
- Complete documentation for understanding and running the project

---

## 📁 Project Structure

Li-Fi-Project
│
├── README.md
├── src
│ ├── transmitter
│ │ └── transmitter.c
│ ├── receiver
│ │ └── receiver.c
│ └── pc_receiver
│ └── lifi_receiver.c
├── docs
│ ├── project_overview.md
│ ├── working_principle.md
│ └── future_scope.md
└── circuit_diagram


---

## 🧠 Project Overview

Li-Fi uses **LED light** to transmit digital data.  
In this project:
- The **transmitter** sends data using LED blinking
- The **receiver** detects light using an LDR
- The **PC simulation** demonstrates the Li-Fi logic using C language

---

## 🧩 Modules Description

### 🔹 Transmitter (Embedded C)
- Uses LED as a data transmitter
- Binary data (1 / 0) is sent through light

### 🔹 Receiver (Embedded C)
- Uses LDR/Photodiode
- Converts light signals back to digital data

### 🔹 PC Receiver (C Simulation)
- Simulates Li-Fi reception on a computer
- Useful for demonstration and testing without hardware

---

## 🖥️ How to Run This Project on Your PC (Windows)

This section explains how **any user** can run the PC-based simulation.

---

### STEP 1: Install Required Software

1. Install **VS Code**  
   https://code.visualstudio.com/

2. Install **MinGW (GCC Compiler)**  
   https://sourceforge.net/projects/mingw/

3. Verify GCC installation:
```powershell
gcc --version
If a version is displayed, GCC is installed correctly ✅

STEP 2: Clone the Repository
Open PowerShell / Command Prompt and run:

git clone https://github.com/your-username/Li-Fi-Project.git
cd Li-Fi-Project
Replace your-username with the repository owner name.

STEP 3: Navigate to PC Receiver Folder
cd src\pc_receiver
STEP 4: Compile the C Program
gcc lifi_receiver.c -o lifi_receiver
This command creates an executable file named lifi_receiver.

STEP 5: Run the Program
.\lifi_receiver
STEP 6: Test the Program
Input:

1
Output:

Light Detected : 1
Input:

0
Output:

No Light : 0
🎉 The Li-Fi PC simulation is now running successfully.

⚠️ Important Notes
transmitter.c and receiver.c are Embedded C programs

They must be executed using Arduino IDE with hardware

The PC program demonstrates Li-Fi working logic only

🛠 Technologies Used
C Language

Embedded C

GCC Compiler (MinGW)

Arduino IDE

VS Code

Git & GitHub

📌 Applications of Li-Fi
Secure indoor communication

Hospitals and aircraft

Smart homes

IoT systems

🚀 Future Scope
High-speed data transmission

Text and image transfer using Li-Fi

Integration with IoT devices

Smart city applications

👨‍💻 Author
Your Name
GitHub: https://github.com/your-username

⭐ Support
If you like this project:

