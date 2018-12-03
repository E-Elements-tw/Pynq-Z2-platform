EMULATION EXAMPLE
=================

Example suitable for exploring the SDSoC emulation flow. 

SDx GUI
-------

In the SDx Project Settings:
 1. Select the 'Generate emulation model' checkbox. 
    a. To enable capture of debug information, select the 'Debug' pull-down
       menu option; or
    b. For faster emulation without debug information, select the 'Optimized'
       pull-down menu option.
 2. Deselect 'Generate bitstream' for the quickest build.
 3. Deselect 'Generate SD card image'.
 4. Build the project.

Starting the emulator:
 1. In the Xilinx Tools pull-down menu, select 'Start/Stop Emulator'.
 2. Select the appropriate Project and Configuration.
 3. Select whether you want to Show the Waveform or not. Not showing the
    waveform will result in a faster emulation.
 4. Click 'Start'. This is equivalent to turning a board on.
 NOTE: If you choose to show the waveform, the Vivado Simulator window will
       open. This allows you to select the signals to be displayed in the
       waveform. Make sure you click on the "Run All" button to start the
       programmable logic simulation after selecting your signals.

Running the program:
 1. Right-click the ELF file in the Project Explorer and select
    'Debug As -> Launch on Emulator (SDSoC Debugger)' to Debug the program on
    the emulator.
 2. You will see program output in the console tab.

Stopping the emulator:
 1. In the Xilinx Tools pull-down menu, select 'Start/Stop Emulator'.
 2. Click on the 'Stop' button. This is equivalent to turning a board off.


Command Line
------------

1. Build the project by typing 'make'.
2. Start the emulator by changing directory to the location where the _sds
   folder is located. Execute the 'sdsoc_emulator -graphic-xsim' command if
   you want start the Vivado Simulator GUI..
3. Press <Ctrl-a x> to exit or <Ctrl-a h> for help.

Type 'sdsoc_emulator -help' for more information.
