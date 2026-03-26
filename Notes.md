**Phase 1: The Essential Downloads**
* Download & Install VS Code: Go to the official VS Code website, download the Windows installer, and run it.
* Download a C Compiler (MinGW-w64):
* The easiest way is using MSYS2. Go to the MSYS2 website. [MSYS2](https://www.msys2.org/)
* Download the installer (.exe) and run it.
* After installation, it will open a terminal window.
* Crucial Step: Type this command in the terminal and press Enter:
* pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
* Press Enter again to accept the default, then type Y and Enter to install all components. 

- **pacman -S mingw-w64-ucrt-x86_64-gcc**
- **pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain**



**Phase 2: Connecting Compiler to Windows (Setting PATH)**
* You need to tell Windows where the compiler is located.
* Open your Windows Search, type "env", and select Edit the system environment variables.
* Click Environment Variables... at the bottom right.
* Under "System Variables," find the variable named Path, select it, and click Edit....
* Click New, then paste the following path (if you used the default installation):
* **C:\msys64\ucrt64\bin**
* Click OK on all windows to close them. 

**Phase 3: Setting Up VS Code**
* Open VS Code.
* Click the Extensions icon on the left-hand sidebar (or press Ctrl+Shift+X).
* Type C/C++ in the search bar.
* **Install the one named "C/C++" by Microsoft.**
* Optional but Recommended: Search for **Code Runner and install it (by Jun Han)** for a "play button" to run code. 

**Phase 4: Write and Run Your First C Program** 
* Create a Folder: On your computer, create a new folder (e.g., C_Projects).
* Open Folder: In VS Code, go to File > Open Folder and select C_Projects.
* Create C File: In the File Explorer (left side), click the "New File" icon (or right-click -> New File), and name it hello.c. 
* You must end the file with .c.
* Write the Code: Paste this code into hello.c:

#include <stdio.h>

int main() {
    printf("Hello World! Spoon feeding works!");
    return 0;
}
* Save: Press Ctrl+S to save. 

**Phase 5: Executing the Code**
* Method A: Using Code Runner (Easiest)
* Click the Run/Play button in the top right corner.
* Your output will appear in the "Output" tab at the bottom. 
* Method B: Using the Terminal (Recommended for Students)
* Open the Terminal in VS Code: Terminal > New Terminal (or Ctrl + `).
* Compile: Type the following and press Enter:
* gcc hello.c -o hello
* (This tells the compiler to take hello.c and make an output file named 'hello'.)
* Run: Type the following and press Enter:
* ./hello.exe
* Result: You will see "Hello World! Spoon feeding works!" printed in the terminal. 
