%BPSK
Fs= 10000;
t= 0:1/Fs:1;
msg= square(2*pi*5*t);
subplot(4,1,1);
plot(t,msg);

carrier= sin(2*pi*50*t);
inverted_carrier= cos(2*pi*50*t);
subplot(4,1,2);j
plot(t,carrier);

bask= carrier;
for i= 1:Fs
    if (msg(i)<= 0)
        bask(i)=0;
    end
end
subplot(4,1,3);
plot(t,bask);

bpsk= carrier;
for i= 1:Fs
    if (msg(i)<= 0)
        bpsk(i)=inverted_carrier(i);
    end
end
subplot(4,1,4);
plot(t,bpsk);