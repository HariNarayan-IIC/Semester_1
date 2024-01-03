%Histogram of image
input= imread('Sample.jpg');
imhist(input);

uniform= rand(1,5000);
subplot(2,1,1);
histogram(uniform);
random_numbers = 5 + 2 * randn(2000, 1);
subplot(2,1,2);
histogram(random_numbers);