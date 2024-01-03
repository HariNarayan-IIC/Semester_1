%Uniform random number vs Gaussian random number

random_numbers= rand(1,1000);
gaussian_random_numbers= randn(1,1000);

subplot(2,1,1);
histogram(random_numbers);
subplot(2,1,2);
histogram(gaussian_random_numbers);

fprintf('mean: %.4f\n',mean(gaussian_random_numbers));
fprintf('Std dev: %.4f\n', std(gaussian_random_numbers));
