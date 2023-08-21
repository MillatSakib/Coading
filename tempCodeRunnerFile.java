import javax.swing.JFrame;
import javax.swing.JLabel;
public class HelloWorldGUI {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            // Create and set up the window
            JFrame frame = new JFrame("Hello, World GUI");
            frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

            // Create a label with "Hello, World!" text
            JLabel label = new JLabel("Hello, World!");

            // Add the label to the content pane
            frame.getContentPane().add(label);

            // Set the size of the window
            frame.setSize(300, 200);

            // Center the window on the screen
            frame.setLocationRelativeTo(null);

            // Display the window
            frame.setVisible(true);
        });
    }
}
