clear all;
close all;

f0 = 493.883;
[msc, fs] = audioread('piano.mp3');
t = 0:1/fs:length(msc)/fs;
t = t(1:end-1);

% ピアノの音の時間波形を描画
figure();
subplot(1,2,1);
plot(t, msc);
xlabel('[s]');
title('時間波形');

Wk = 0:(2*pi)/length(msc):2*pi;
Wk = Wk(1:end-1);

% 横軸を実際の周波数に直す
Fs = fs*(Wk./(2*pi));

% ピアノの音の周波数振幅特性を描画
Msc = fft(msc);
subplot(1,2,2);
plot(Fs,abs(Msc))
axis([0 Fs(length(Fs)/2) 0 7000])
xlabel('[Hz]');
title('振幅特性');
