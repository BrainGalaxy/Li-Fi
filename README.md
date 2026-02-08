# 🔦 Li-Fi Communication Project

Li-Fi (Light Fidelity) is a wireless communication technology that uses **visible light** instead of radio waves to transmit data.

This project demonstrates:
- A **PC-based Li-Fi receiver simulation**
- Basic **Li-Fi working logic**
- Clear separation between **hardware (Arduino)** and **PC simulation**

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

## 🧠 Project Explanation

- **Transmitter**  
  Uses an LED to transmit binary data (1s and 0s) through light.

- **Receiver**  
  Uses an LDR/photodiode to detect light intensity and convert it back to data.

- **PC Receiver (Simulation)**  
  A C program that simulates Li-Fi data reception on a computer.

---

## 🖥️ How to Run This Project on Your PC (Windows)

This section explains how **any user** can run the project on their PC.

---

### STEP 1: Install Required Software

1. Install **VS Code**  
   https://code.visualstudio.com/

2. Install **MinGW (GCC Compiler)**  
   https://sourceforge.net/projects/mingw/

3. Verify installation by running:
```powershell
gcc --version
If GCC version is shown, installation is successful ✅
---
### 
