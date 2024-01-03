input_image= imread('Sample.jpg');
subplot(1,3,1);
imshow(input_image);
title('Input image');

[indexed_image, map]= rgb2ind(input_image,64);
subplot(1,3,2);
imshow(indexed_image,map);
title('Output image');

file= imfinfo('Sample.jpg');
disp(file);

h= file.Height;
w= file.Width;
bitDepth= file.BitDepth;
original_size= h*w*bitDepth/8;
compressed_size= file.FileSize;
compression_Ratio= original_size/compressed_size;
fprintf('Compression ratio: %.4f\n', compression_Ratio);

subplot(1,3,3);
imhist(input_image);