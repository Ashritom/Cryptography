import java.io.*;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.security.Key;
import javax.crypto.Cipher;
import javax.crypto.CipherOutputStream;
import javax.crypto.KeyGenerator;
import java.util.Base64;
public class BlowFish {
public static void main(String[] args) throws Exception {
// TODO code application logic here
KeyGenerator keyGenerator =
KeyGenerator.getInstance("Blowfish");
keyGenerator.init(128);
Key secretKey = keyGenerator.generateKey();
Cipher cipherOut = Cipher.getInstance("Blowfish/CFB/NoPadding");
cipherOut.init(Cipher.ENCRYPT_MODE,secretKey);
Base64.Encoder encoder=Base64.getEncoder();
byte iv[] = cipherOut.getIV();
if (iv != null) {
System.out.println("Initialization Vector of the Cipher: " + encoder.encodeToString(iv)); }
FileInputStream fin = new FileInputStream("inputFile.txt");
FileOutputStream fout = new FileOutputStream("outputFile.txt");
CipherOutputStream cout = new CipherOutputStream(fout, cipherOut);
int input = 0;
while ((input = fin.read()) != -1) {
cout.write(input);
}
fin.close();
cout.close();
} }