clc;
clear;
close all;

Image1= imread('Sample.jpg');
Image2= Image1-20;


figure;
subplot(1,2,1);
title("Original");
imshow(Image1);

subplot(1,2,2);
title("Modified");
imshow(Image2);

imwrite(Image2, 'Sample_mod.jpg');

