# Real-time-image-processing-using-FPGA
VHDL code written using Xilinx IDE to implement basic image processing filters in Real-time

Semester project for Real-time Image processing module
Masters in Computer Vision (MSCV- VIBOT) - University of Burgundy

Open the file IMAGE_PROCSSING.xise and you're good to go.

A 128x128 lena image has already been vectorized and binarized to input to the program. The file is called 'Lena128x128g_8bits' and present
in 'Lena' folder. After processing the program writes the it to the file named 'Lena_written' in the same folder.
To display the processed image, a small matlab code is written to reshape the processed vector back to 128x128.
A few zeros are added to account for missing zeros (the code is not perfect but works)

To implement a different filter just change the filter coefficients in the code. The input 'a' of each multipler given in the processor module is where you need to change the coeffient values. Put your value as a 4 bit binary number.

Refer to the pdf fie called FPGA report for an explanation of the code and the stragtegy used to accomplish the given task.
