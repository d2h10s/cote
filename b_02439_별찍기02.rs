use std::io::stdin;
fn main() {
    let mut s = String::new();
    stdin().read_line(&mut s).expect("read failed");
    let n:usize = s.trim().parse().unwrap();
    let mut star = String::from("*");
    for _i in 0..n{
        println!("{st:>nu$}", st=star, nu=n);
        star += "*";
    }
}