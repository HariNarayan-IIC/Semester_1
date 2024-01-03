%Pulse width modulation

message_freq= 4;
carrier_freq= 40;

t= 0: 1/(100* carrier_freq): 0.25;

message_signal= 0.75*sin(2*pi*message_freq*t);
sawtooth_signal= sawtooth(2*pi*carrier_freq*t);

subplot(2,1,1);
plot(t, message_signal,t, sawtooth_signal);

%Comparator
n= length(t);
PWM_signal= zeros(n);
for i=1:n
    if message_signal(i)> sawtooth_signal(i)
        PWM_signal(i)= 1;
    else
        PWM_signal(i)= -1;
    end
end

subplot(2,1,2);
plot(t, PWM_signal);
axis([0 0.25 -2 2]);
