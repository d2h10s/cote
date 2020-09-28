use std::io::stdin;
fn main() {
    let mut n:(String,String) = (String::new(), String::new());
    stdin().read_line(&mut n.0).unwrap();
    stdin().read_line(&mut n.1).unwrap();
    println!("{}", n.0.trim().parse::<i32>().unwrap()+n.1.trim().parse::<i32>().unwrap())
}
