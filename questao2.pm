#!/usr/bin/perl 

@vetor = ();
$resultado = 0;
$n = <STDIN>;
if($n%2==0){
	$n = $n/2;
}else{
	$n = ($n+1)/2;
}
for($i=1;$i<=$n;$i++){
	$aux1 = ((2*$i)-1)**((2*$i)-1);
	$aux2 = (2*$i)**(2*$i);
	push(@vetor,$aux1/$aux2);
	if($i-1!=0){
		if(($i-1)%2==0){
			$aux1 = $vetor[$i-2];
			$aux2 = $vetor[$i-1];
			$vetor[$i-2] = $aux1*$aux2;
			$vetor[$i-1] = 0;
		}
	}
	
}
for($i=1;$i<=$n;$i++){
	$resultado += $vetor[$i-1];
}
print $resultado;
