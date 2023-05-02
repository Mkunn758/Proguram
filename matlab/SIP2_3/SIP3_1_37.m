clear all;
close all;

f0 = 493.883; % シ4の周波数
[msc, fs] = audioread('piano.mp3'); % ファイル名が正しくない場合は変更する
t = 0:1/fs:length(msc)/fs;
t = t(1:end-1);

Wk = 0:(2*pi)/length(msc):2*pi;
Wk = Wk(1:end-1);

Fs = fs*(Wk./(2*pi));

figure();
subplot(1,2,1);
plot(t, msc);
xlabel('(s)');
title('時間波形');

Msc = fft(msc);

subplot(1,2,2);
plot(Fs,abs(Msc));
axis([0 fs/2 0 7000]);
xlabel('(Hz)');
title('振幅特性');