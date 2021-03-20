fn main() {
    let mut m = 0;
    for i in (100..=999).rev(){
        for j in (100..=999).rev(){
            let n = i * j;
            let a = n.to_string();
            let b = a.as_bytes();
            let l = b.len();
            let mut s = true;
            for k in 0..l/2{
                if b[k] != b[l-k-1] {s = false; break;}
            }
            if s{ m = std::cmp::max(m, n);
            }
        }
    }
    println!("{}", m);
}