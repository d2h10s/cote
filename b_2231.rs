use std::io::{stdin};

fn main(){
    let mut s= String::new();
    stdin().read_line(&mut s).unwrap();
    let N:isize = s.trim().parse::<isize>().unwrap();
    for i in ((N as f32).sqrt() as isize..N).rev(){
        let mut sum = i;
        let mut j = i;
        while j > 0{
            sum += j % 10;
            j /= 10;
        }
        if sum == N{
            println!("{}", i);
            return;
        }
    }
    println!("0");
}