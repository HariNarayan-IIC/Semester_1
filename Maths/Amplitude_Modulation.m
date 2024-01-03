% Amplitude Modulation Simulation in MATLAB

% Parameters
Ac = 2;          % Carrier amplitude
Am = 2;          % Modulating amplitude
fc = 100;        % Carrier frequency (in Hz)
fm = 10;         % Modulating frequency (in Hz)
duration = 1;    % Duration of the signal (in seconds)
Fs = 1000;       % Sampling frequency

% Time vector
t = 0:1/Fs:duration;

% Modulating signal
modulating_signal = Am * cos(2*pi*fm*t);
subplot(4,1,1);
plot(t, modulating_signal);
title('Modulating Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Carrier signal
carrier_signal = Ac * cos(2*pi*fc*t);
subplot(4,1,2);
plot(t, carrier_signal);
title('Carrier Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Amplitude modulation
modulated_signal = (Ac + modulating_signal) .* (carrier_signal/Ac);
subplot(4,1,3);
plot(t, modulated_signal);
title('Modulated Signal');
xlabel('Time (s)');
ylabel('Amplitude');

% Demodulation
n= length(modulated_signal);
for i= 1:n
    if modulated_signal(i)<0
        modulated_signal(i)=0;
    end
end

LPF = dsp.LowpassFilter;

d = fdesign.lowpass('Fp,Fst,Ap,Ast',10,30,0.5,40,Fs);
Hd = design(d,'equiripple');
output = filter(Hd,modulated_signal);
%demodulated_signal = step(LPF,modulated_signal);

% Plotting the signals
subplot(4,1,4);
plot(t, output);
title('Demodulated Signal');
xlabel('Time (s)');
ylabel('Amplitude');




