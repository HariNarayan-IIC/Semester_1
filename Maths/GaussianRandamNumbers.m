
%Generate 2000 Gaussian random number
gaussianNumbers= randn(1,2000);

%plot histogram
histogram(gaussianNumbers, 'Normalization', 'probability');
title('Histogram of Gaussian Random Numbers');
xlabel('Value');
ylabel('Probability');

%Calculate mean and standard deviation
meanValue= mean(gaussianNumbers);
stdDeviation= std(gaussianNumbers);

fprintf('Mean: %.4f\n', meanValue);
fprintf("Standard Deviation: %.4f\n", stdDeviation);