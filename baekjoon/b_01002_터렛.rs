use std::io;
fn main(){
    let mut s = String::new();
    io::stdin().read_line(&mut s).unwrap();
    let n = s.trim().parse::<usize>().unwrap();
    for _i in 0..n{
        s.clear();
        io::stdin().read_line(&mut s).unwrap();
        let num:Vec<_> = s.trim()
                            .split_whitespace()
                            .map(|x| x.parse::<isize>().unwrap())
                            .collect();
        let (x1, y1, r1, x2, y2, r2) = (num[0], num[1], num[2], num[3], num[4], num[5]);
        let d2 = (x2-x1).pow(2) + (y2-y1).pow(2);
        if d2 < (r1+r2).pow(2) && d2 > (r2-r1).pow(2){
            println!("2");
        } else if d2 == (r1+r2).pow(2) || (d2 == (r2-r1).pow(2) && d2 != 0){
            println!("1");
        } else if d2 < (r2-r1).pow(2) || d2 > (r1+r2).pow(2){
            println!("0");
        } else if d2 == 0{
            if r1 == r2{
                println!("-1");
            } else{
                println!("0");
            }
        }
    }
}