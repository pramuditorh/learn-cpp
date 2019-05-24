# Installation

### Compiler
---------------------------------------------------------------------------------------------------------------------------------------
#### Windows 10
- Open [MinGW](http://www.mingw.org/) website 
- Click the download menu on the top right corner, and you will be directed to the download page (https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/).
- Click the download button (blue square button with a Windows logo on it).
- After download finish, install it.
- Choose your installation directory, and click continue.
- Wait until the processes finish, and click continue again.
- Click Basic Setup on the side then Click the checkbox and choose “Mark for installation”. Do this for all the packages. 
- Close the current window. It will pop the confirmation window, choose to apply for changes. It will pop a window again, then choose the apply button. Wait until the download process finishes.
- After we complete install the compiler then we need to configure our environment variables.
- Open your Windows Settings, and then search for environment variables at the search section, then choose the Edit the system environment variables.
- Click Environment Variables. Under the System Variables section, choose Path then click the Edit button.
- Navigate to your MinGW installation directory, and then open the bin folder. You can copy the path on the path address section.
- Back to Edit Environment Variables, click the new button then paste the path you already copied. Then click OK.
- Open your terminal.
- Type ```g++ --version```
- If it is outputting the version of the compiler, it is success.
---------------------------------------------------------------------------------------------------------------------------------------
#### Linux
- There are two option to install the GNU C/C++ Compiler in Linux, using build-essentials or install g++ package itself
- Open your terminal.
- For installing the compiler with build-essentials, type sudo apt install build-essential
- For installing the compiler with g++ package, type sudo apt install g++
- Type ```g++ --version```
- If it is outputting the version of the compiler, it is success.

### Install IDE
---------------------------------------------------------------------------------------------------------------------------------------
#### Windows 10
- Dev-C++
  - Open [this](https://sourceforge.net/projects/orwelldevcpp/) link and click the download button. 
  - The installation process is straightforward, you can click finish until finish.
- Microsoft Visual Studio Code
  - Open [this](https://code.visualstudio.com/Download) link and click the download button. 
  - The installation process is also straightforward, you can click finish until finish.
---------------------------------------------------------------------------------------------------------------------------------------
#### Linux
- Dev-C++
  - As per I am writing this tutorial, it is not recommended to install Dev-C++ on Linux because it is still buggy. I recommend installing Microsoft Visual Studio or Code::Blocks instead.
- Microsoft Visual Studio
  - Open [this](https://code.visualstudio.com/Download) link and click the download button. Make sure you download with the correct distribution of your Linux operating system.
  - Open your terminal.
  - If your distribution is Debian or Ubuntu. Type ```sudo dpkg -i path/to/deb/file```
  - If your distribution is RedHat, Fedora or SUSE. Type ```sudo rpm -i path/to/rpm/file```
