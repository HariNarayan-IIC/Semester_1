%Histogram equalization of image
image = imread('input3.jpg');
input_image= rgb2gray(image);

%subplot(2,3,1);
%imshow(input_image);
%title("Input image");

%subplot(2,3,2);
%imhist(input_image);
h= imhist(input_image);
%xlabel("Grayscale");
%ylabel("Frequency");
[rows, cols]= size(input_image);

%Cumulative frequency graph
%disp(h);
H= double.empty(256,0);
for i= 1:256
    H(i)= 0;
    for j= 1:i
        H(i)= H(i)+ h(j);
    end
end
%disp(H);
H= round(((H-H(1))/((rows*cols)- H(1)))*255);
x= 0:255;
%subplot(2,3,3);
plot(x, H);
xlabel("Grayscale value");
ylabel("Cumulative frequency");
axis([0 255 0 255]);

%{
output_image= histeq(input_image, rows*cols);

subplot(2,3,4);
imshow(output_image);
title("Output image");

subplot(2,3,5);
imhist(output_image);
xlabel("Grayscale");
ylabel("Frequency");
h=imhist(output_image);
for i= 1:256
    H(i)= 0;
    for j= 1:i
        H(i)= H(i)+ h(j);
    end
end
%disp(H);
%x= 0:255;
subplot(2,3,6);
plot(x, H);
xlabel("Grayscale value");
ylabel("Cumulative frequency");
axis([0 255 0 rows*cols]);
%}