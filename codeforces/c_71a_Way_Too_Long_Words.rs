use std::io;

fn main(){
    let mut s:String = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n = s.trim().len();
    if n >= 10
    {
        println!("{}", s[0]+n.to_string()+s.chars().last());
    }
}