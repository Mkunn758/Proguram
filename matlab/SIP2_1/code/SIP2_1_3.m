clear;
close all;

%%%　課題1　入力信号の作成
Fs = 100; %Hz
tmin = 0; % s
tmax = 10; % s
dt = 1/Fs; % s
t =tmin:dt:tmax;

xnoise = randn(size(t)); % 標準ガウス分布
xnoise = xnoise/5;%　標準偏差を0.2にする
sqrt(var(xnoise)) %　確認用

xDC = 1 + xnoise;
u = zeros(size(t));
idx = find(t >= 5);
u(idx) = 1;
xStep = u + xnoise;
xSin = sin(2*pi*t) + xnoise;

% 描画
figure();
subplot(1,3,1); % 直流
plot(t,xDC,'b:');
meanx = mean(xDC); % 平均
hold on;
plot([tmin tmax],[meanx meanx],'r-');
hold off;

subplot(1,3,2); % step
plot(t,xStep,'b:');
meanx = mean(xStep); % 平均
hold on;
plot([tmin tmax],[meanx meanx],'r-');
hold off;

subplot(1,3,3); % sin
plot(t,xSin,'b:');
meanx = mean(xSin); % 平均
hold on;
plot([tmin tmax],[meanx meanx],'r-');
hold off;

%%%　課題2　移動平均1
wLEN = 10; % windowLENGTHの略、単位はsample
wstride = 10; %　窓の移動量、単位はsample
count = 0;

% 移動平均の計算
ty =tmin:dt*10:tmax;
yDC = zeros(size(ty));

for i = 1:length(ty)
    yDC(i) = 0;
    for k = 1:wLEN
        wcount = k + count;
        if wcount > 0 && wcount <= length(t)
            yDC(i) = yDC(i) + xDC(wcount);
        end
    end
    count = count + wstride;
    yDC(i) = yDC(i) / wstride;
end

ySin = zeros(size(ty));
count = 0;
for i = 1:length(ty)
    ySin(i) = 0;
    for k = 1:wLEN
        wcount = k+count;
        if wcount > 0 && wcount <= length(t)
            ySin(i) = ySin(i) + xSin(wcount);
        end
    end
    count = count + wstride;
    ySin(i) = ySin(i) / wstride;
end

yStep = zeros(size(ty));
count = 0;
for i = 1:length(ty)
    yStep(i) = 0;
    for k = 1:wLEN
        wcount = k+count;
        if wcount > 0 && wcount <= length(t)
            yStep(i) = yStep(i) + xStep(wcount);
        end
    end
    count = count + wstride;
    yStep(i) = yStep(i) / wstride;
end


% 描画
figure();
subplot(1,3,1);
plot(t,xDC,'b:');
hold on;
plot(ty,yDC,'r-');
hold off;

subplot(1,3,2);
plot(t,xStep,'b:');
hold on;
plot(ty,yStep,'r-');
hold off;

subplot(1,3,3);
plot(t,xSin,'b:');
hold on;
plot(ty,ySin,'r-');
hold off;