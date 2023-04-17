clear;
close all;

%---時間---%
Fs = 100; %Hz
tmin = 0; 
tmax = 1; 
dt = 1/Fs; 
t =tmin:dt:tmax;

%---入力信号---%
x = sin(2*pi*t);

%---ノイズ合成---%
noise = 0.5 * randn(size(x));
xnoise = x + noise; %ノイズ成分を加算

count = [10 50 100 500]; %加算平均回数
y = zeros(length(count), length(x)); %平均結果用

%---加算平均---%
for i = 1:length(count)
    sum = 0;
    for j = 1:count(i)
        sum = sum + xnoise;
        %---ノイズ合成---%
        noise = 0.5 * randn(size(x));
        xnoise = x + noise;
    end
    y(i,:) = sum / count(i);
end

%---描画---%
figure();
subplot(2,2,1);
plot(t,xnoise,'b:');
hold on;
plot(t,y(1,:),'r-');
hold off;
title('加算回数=',count(1))

subplot(2,2,2);
plot(t,xnoise,'b:');
hold on;
plot(t,y(2,:),'r-');
hold off;
title('加算回数=',count(2))

subplot(2,2,3);
plot(t,xnoise,'b:');
hold on;
plot(t,y(3,:),'r-');
hold off;
title('加算回数=',count(3))

subplot(2,2,4);
plot(t,xnoise,'b:');
hold on;
plot(t,y(4,:),'r-');
hold off;
title('加算回数=',count(4))

%---オワタ---%
gtext('\(^o^)/')