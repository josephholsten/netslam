function m = phuber(p,d)
o = ones(size(p));
m = abs(2 * d^2 * ((o + (p/d).^2).^0.5 - o));


