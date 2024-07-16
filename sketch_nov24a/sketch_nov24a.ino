int fr=A2;
int resultado; // la diferencia con el programa del potenciometro que asignabamos cero a la v. leer, aca no //
 // Si no aclaramos la asignacion/el valor de la variable, el arduino lo guarda/asigna en un lugar/valor random de su memoria //

void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 resultado =analogRead(fr);
 Serial.println (resultado); // No ponemos fr pq en ese contexto al arduino no le hemos pedido que lo lea, al poner Serial.print (fr) //
  // no mostraria nada ya que no esta leido //
  
}
