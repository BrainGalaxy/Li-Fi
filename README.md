# 🔦 Li-Fi Communication Project

Li-Fi (Light Fidelity) is a wireless communication technology that uses **visible light** instead of radio waves to transmit data.

This project demonstrates:
- Basic **Li-Fi working principle**
- **Embedded C** code for transmitter & receiver (Arduino)
- **PC-based C simulation** for easy testing and demonstration

---

## 📁 Project Structure

Li-Fi
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

- The **transmitter** sends data by blinking an LED
- The **receiver** detects light using an LDR/photodiode
- The **PC simulation** shows how Li-Fi logic works without hardware

---

## 🧩 Modules Used

### 🔹 Transmitter (Embedded C)
- Uses LED for data transmission
- Runs on Arduino hardware

### 🔹 Receiver (Embedded C)
- Uses LDR / photodiode
- Converts light signals to digital data

### 🔹 PC Receiver (C Simulation)
- Runs on a computer
- Simulates Li-Fi data reception logic

---

## 🖥️ How to Run This Project on Your PC (Windows)

Follow the steps below to run the **PC-based Li-Fi simulation**.

---

### 🔹 STEP 1: Install Required Software

1. **VS Code**  
   👉 https://code.visualstudio.com/

2. **MinGW (GCC Compiler)**  
   👉 https://sourceforge.net/projects/mingw/

3. **Git (Optional but Recommended)**  
   👉 https://git-scm.com/

4. Verify GCC installation:
```powershell
gcc --version
