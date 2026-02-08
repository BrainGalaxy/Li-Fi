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
