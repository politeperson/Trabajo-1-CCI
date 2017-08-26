#include <iostream>

using namespace std;

int main(){
  int h_in,m_in,s_in,h_out,m_out,s_out,rp_hor,rp_min,rp_sec;
  cout << "Digita hora de entrada: ";
  cin >> h_in >> m_in >> s_in;
  cout << "Digita hora de salida: ";
  cin >> h_out >> m_out >> s_out;
  if(s_in < s_out){
    s_out -= s_in;
  }
  else if(s_in == s_out){
    s_out = 0;
  }
  else{
    m_out--;
    s_out+=s_in;
  }
  if(s_out > 59){
    m_out+=s_out/60;
    s_out%=60;
  }

  if(m_in < m_out){
    m_out -= m_in;
  }
  else if(m_in == m_out){
    m_out = 0;
  }
  else{
    h_out--;
    m_out+=m_in;
  }
  if(m_out > 59){
    h_out+=m_out/60;
    m_out%=60;
  }

  if(h_in < h_out){
    h_out -= h_in;
  }
  else if(h_in == h_out){
    h_out = 0;
  }
  else{
    h_in = 24 - h_in;
    h_out += h_in;
  }
 
  cout << "Tiempo transcurrido: "<<h_out << ":" << m_out << ":" << s_out << endl;
  return 0;
}
