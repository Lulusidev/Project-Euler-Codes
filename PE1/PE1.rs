fn main(){
    let mut sig=0;
    for i in 0..1000{
        if (i%3==0) || (i%5==0){
            sig+=i;
            }
    }
println!("{}\n",sig);
}
