clc;
clear;
close all;

[image,map]=imread('Sample2.png');
figure
imshow(image,map);
image_info= imfinfo('Sample2.png');
disp(image_info);