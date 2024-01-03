%Amplitude modulation

Am= 1;
Ac= 1;
Fm= 4;
Fc= 40;
Fs= 400;

t= 0: 1/Fs: 1;

%Message signal
msg_signal= Am * sin(2*pi*Fm*t);
subplot(4,1,1);
plot(t,msg_signal);
%carrier signal
carrier= Ac* sin(2* pi* Fc* t);
subplot(4,1,2);
plot(t,carrier);

%Amplitude modulated signal
mod_signal= (Ac + msg_signal).* (carrier/Ac);
subplot(4,1,3);
plot(t, mod_signal);

%Demodulated signal
for i= 1:Fs
    if (mod_signal(i)< 0)
        mod_signal(i)= 0;
    end
end

d= fdesign.lowpass(0.5,10,0.5,40,Fs);
Hd= design(d);
demod_signal= filter(Hd, mod_signal);
subplot(4,1,4);
plot(t, demod_signal);