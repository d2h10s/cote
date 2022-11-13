use std::io::{self};

fn main() {
    let mut s:String = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let i:isize = s.trim().parse::<isize>().unwrap();
    if i<4 || i%2==1
    {
        println!("NO");
    }
    else
    {
        println!("YES");
    }
}
