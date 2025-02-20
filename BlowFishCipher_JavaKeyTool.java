import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey;
import java.util.Base64;

public class BlowFishCipher_JavaKeyTool {
    public static void main(String[] args) throws Exception {
        // Create a KeyGenerator based on Blowfish algorithm
        KeyGenerator keyGenerator = KeyGenerator.getInstance("Blowfish");

        // Generate a SecretKey
        SecretKey secretKey = keyGenerator.generateKey();

        // Create a Cipher object for Blowfish
        Cipher cipher = Cipher.getInstance("Blowfish");

        // Initialize Cipher in ENCRYPT_MODE with the secret key
        cipher.init(Cipher.ENCRYPT_MODE, secretKey);

        // Text to be encrypted
        String inputText = "Ashrit";

        // Encrypt the message
        byte[] encrypted = cipher.doFinal(inputText.getBytes());

        // Re-initialize the Cipher in DECRYPT_MODE with the same key
        cipher.init(Cipher.DECRYPT_MODE, secretKey);

        // Decrypt the message
        byte[] decrypted = cipher.doFinal(encrypted);

        // Convert encrypted bytes to Base64 for readable output
        String encryptedBase64 = Base64.getEncoder().encodeToString(encrypted);

        // Display results
        System.out.println("Original String: " + inputText);
        System.out.println("Encrypted (Base64): " + encryptedBase64);
        System.out.println("Decrypted: " + new String(decrypted));
    }
}
