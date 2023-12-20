package test;

public class Etudiant {
    private String nom;
    private double note1;
    private double note2;
    private double note3;
    private double note4;
    
    //private double[] notes = new double[4];
    
    private double moyenne;
    private String resultat;

    public Etudiant(String nom, double note1, double note2, double note3, double note4) {
        this.nom = nom;
        this.note1 = note1;
        this.note2 = note2;
        this.note3 = note3;
        this.note4 = note4;
        calculerMoyenne();
        determinerResultat();        
    }

    public void calculerMoyenne() {
        moyenne = (note1 + note2 + note3 + note4) / 4.0;
    }

    public void determinerResultat() {
        if (moyenne < 10) {
            resultat = "non admis";
        } else {
            resultat = "admis";
        }
    }

    public void setNote1(double note1) {
        this.note1 = note1;
        calculerMoyenne();
        determinerResultat();
    }
    public void setNote2(double note2) {
        this.note2 = note2;
        calculerMoyenne();
        determinerResultat();
    }
    public void setNote3(double note3) {
        this.note3 = note3;
        calculerMoyenne();
        determinerResultat();
    }

    public double getMoyenne() {
        return moyenne;
    }

    public String getResultat() {
        return resultat;
    }

    public static void main(String[] args) {
        Etudiant etudiant = new Etudiant("Alice", 12.5, 5.0, 9.0, 11.0);

        System.out.println("Nom de l'étudiant : " + etudiant.nom);
        System.out.println("Moyenne : " + etudiant.getMoyenne());
        System.out.println("Résultat : " + etudiant.getResultat());

        
        etudiant.setNote3(11.5);
        System.out.println("\nNouvelle moyenne : " + etudiant.getMoyenne());
        System.out.println("Nouveau résultat : " + etudiant.getResultat());
    }
}

