clc; clear all; close all;




%Displayng original lena image
lena_vector  = num2str(load('Lena128x128g_8bits.dat'));
lena_vector_decimal = bin2dec(lena_vector);
lena_reshaped = reshape(lena_vector_decimal',128,128);
imshow(lena_reshaped',[]);
title('Original Lena Image')


%Displaying processed lena image
lena_vector2  = num2str(load('Lena_written.dat'));
lena_vector_decimal2 = bin2dec(lena_vector2);
lena = ([  zeros(136,1); lena_vector_decimal2; zeros(20,1)]);
lena_reshaped2 = reshape(lena',128,128);
figure;
imshow(lena_reshaped2',[]);
title('Processed Image')