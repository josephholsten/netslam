function m = huber(p,d)
m = zeros(size(p));
for i = 1:size(p,2)
    display(i);
    if abs(p(i)) <= d
        m(i) = p(i)^2 / (2 * d);
    else
        m(i) = abs(p(i)) - d / 2;
    end
    display(m(i));
end

