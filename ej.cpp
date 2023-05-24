%2. Halla el volumen del sólido de revolución generado por 
%la rotación, alrededor del eje X, de la región
%situada en el primer cuadrante que está limitada por la izquierda
%por el eje Y, inferiormente por la
% recta y=x/2, superiormente a la izquierda por la curva 
% y=1+sqrt(x) y a la derecha por la curva y=2/sqrt(x). 
%Dibuja el recinto que se hace girar.
%
clear all; clf;
disp('')
disp('Ejercicio 2.')
syms x
der = 2/sqrt(x)%Limitada por la derecha
inf = x/2 %Limitada por abajo
sup = 1+sqrt(x) %Limitada por arriba
w = linspace(0,6,100);
%Procedemos a dibujar el area
hold on;
fplot('2/sqrt(x)',[0,3],'r') %funcion que limita por la derecha(rojo)
fplot('x/2',[0,3],'g') %funcion que limita por abajo (verde)
fplot('1+sqrt(x)',[0,3],'b')%funcion que limita por arriba(azul)
plot([0,0],[-0.5,3],'y')%eje OY
plot([3,-0.5],[0,0],'k--')%eje OX
axis([-0.5,2.5,-0.5,2.5])
%Procedemos a calcular los puntos de corte
x1 = solve(sup-der,x)%Punto de corte de la azul con la roja
x2 = solve(der-inf,x)%Punto de corte de la roja con la verde
%Ahora procedems a calcular el volumen del solido de revolucion
Vol = pi*int(sup^2,0,x1)-pi*int(inf^2,0,x1)+pi*int(der^2, x1,x2)-pi*int(inf^2,x1,x2);
disp('El volumen de revolucion es:')
valor_aproximado = double(Vol)
