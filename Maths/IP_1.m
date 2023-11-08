clc;
clear;
close all;


%Reading truecolor image
Image1= imread('Sample.jpg');

%Reading indexed image
[Image2, map]= imread('Sample2.png');

%Reading greyscale image
Image3= imread('Sample3.png');

%___________________________________________
%Display truecolor image
figure;
subplot(1,2,1);
imshow(Image1);

%Display indexed image
figure;
imshow(Image2, map);

%Display greyscale image
figure;
imshow(Image3);

%___________________________________________
%Write truecolor image
% Image1_mod= Image1 - 20;
% subplot(1,2,2);
% imshow(Image1_mod);

imwrite(Image1, 'Sample_mod.jpg');

%Write indexed image
imwrite(Image2, map, 'Sample2.png');

%Write greyscale image
imwrite(Image3, 'Sample3.png');

