fn main() {
    let mut n = 20 * 19;
    loop{
        let mut s = true;
        for i in 2..=20 {
            if n % i != 0 { s = false; break;}
        }
        if s { print!("{}", n); return; }
        n += 20 * 19;
    }

}
