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
wLEN = 100; % windowLENGTHの略、単位はsample
wstride = 1; %　窓の移動量、単位はsample

% 移動平均の計算
yDC = zeros(size(xDC));
for i = 1:length(t)
    yDC(i) = 0;
    for k = 1:wLEN
        wcount = i-k+wstride;
        if wcount > 0
            yDC(i) = yDC(i) + xDC(wcount);
        end
    end
    yDC(i) = yDC(i) / min(i, wLEN);
end

ySin = zeros(size(xSin));
for i = 1:length(t)
    ySin(i) = 0;
    for k = 1:wLEN
        wcount = i-k+wstride;
        if wcount > 0
            ySin(i) = ySin(i) + xSin(wcount);
        end
    end
    ySin(i) = ySin(i) / min(i, wLEN);
end

yStep = zeros(size(xStep));
for i = 1:length(t)
    yStep(i) = 0;
    for k = 1:wLEN
        wcount = i-k+wstride;
        if wcount > 0
            yStep(i) = yStep(i) + xStep(wcount);
        end
    end
    yStep(i) = yStep(i) / min(i, wLEN);
end


% 描画
figure();
subplot(1,3,1);
plot(t,xDC,'b:');
hold on;
plot(t,yDC,'r-');
hold off;

subplot(1,3,2);
plot(t,xStep,'b:');
hold on;
plot(t,yStep,'r-');
hold off;

subplot(1,3,3);
plot(t,xSin,'b:');
hold on;
plot(t,ySin,'r-');
hold off;