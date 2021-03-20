fn main() {
    let mut f = [0,1,1,1];
    while f[3] < 4000000{
        if f[3] % 2 == 0 {f[0] += f[3]}
        f[3] = f[1] + f[2];
        f[2] = f[1];
        f[1] = f[3];
    }
    println!("{}", f[0]);
}