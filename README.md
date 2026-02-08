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

---

## 🖥️ How to Run This Project on Your PC (Windows)

> ### 🔹 STEP 1: Install Required Software
> - **VS Code**: https://code.visualstudio.com/
> - **MinGW (GCC Compiler)**: https://sourceforge.net/projects/mingw/
> - **Git (Optional)**: https://git-scm.com/
>
> Verify GCC installation:
> ```powershell
> gcc --version
> ```
>
> ---
>
> ### 🔹 STEP 2: Clone the Repository
> ```bash
> git clone https://github.com/BrainGalaxy/Li-Fi.git
> cd Li-Fi
> ```
>
> ---
>
> ### 🔹 STEP 3: Navigate to PC Receiver Folder
> ```powershell
> cd src\pc_receiver
> ```
>
> ---
>
> ### 🔹 STEP 4: Compile the C Program
> ```powershell
> gcc lifi_receiver.c -o lifi_receiver
> ```
>
> ---
>
> ### 🔹 STEP 5: Run the Program
> ```powershell
> .\lifi_receiver
> ```
>
> ---
>
> ### 🔹 STEP 6: Test the Program
> **Input:**
> ```
> 1
> ```
> **Output:**
> ```
> Light Detected : 1
> ```
>
> **Input:**
> ```
> 0
> ```
> **Output:**
> ```
> No Light : 0
> ```
>
> ---
>
> ⚠️ **Important Notes**
> - `transmitter.c` and `receiver.c` are Embedded C programs
> - They require Arduino IDE + hardware
> - This PC program is a Li-Fi logic simulation

