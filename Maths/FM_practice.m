%FM
Am= 1;
Ac= 1;
Fm= 4;
Fc= 25;
Fs= 500;
%Time
t= 0:1/Fs:1;
%msg signal
msg= Am* cos(2*pi*Fm*t);
subplot(4,1,1);
plot(t,msg);
%Carrier signal
carrier= Ac* cos(2*pi*Fc*t);
subplot(4,1,2);
plot(t,carrier);
%FM signal
FM= Ac* cos((2*pi*Fc*t) + (10/Fm)*sin(2*pi*Fm*t));
subplot(4,1,3);
plot(t,FM);

%PM signal
PM= Ac* cos((2*pi*Fc*t) + (2.5* cos(2*pi*Fm*t)));
subplot(4,1,4);
plot(t, PM);
