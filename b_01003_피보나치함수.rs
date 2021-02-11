use std::io;

fn main(){
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n = s.trim().parse::<i32>().unwrap();
    let mut f = vec![0,1,1];
    for i in 1..=40{
        f.push(f[i]+f[i+1]);
    }
    for _i in 0..n{
        s.clear();
        io::stdin().read_line(&mut s).unwrap();
        let num = s.trim().parse::<usize>().unwrap();
        if num == 0{
            println!("1 0");
        }
        else {println!("{} {}", f[num-1], f[num]);}
    }
}