clear all;
close all;

f0 = 493.883;
[msc, fs] = audioread('piano.mp3');
t = 0:1/fs:length(msc)/fs;
t = t(1:end-1);

Wk = 0:(2*pi)/length(msc):2*pi;
Wk = Wk(1:end-1);

Fs = fs*(Wk./(2*pi));

%sound(msc, Fs);

%figure();
%plot(t, msc)

Msc = fft(msc);

figure();
plot(Fs,abs(Msc))
axis([0 Fs(length(Fs)/2) 0 7000])
return;