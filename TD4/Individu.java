package test;

public class Individu {
    private String nom;
    private String adresse;
    private String numeroTelephone;
    
    private static int nombreObjets = 0;
    private static Individu[] listeIndividus = new Individu[10];
    
    public Individu(String nom, String adresse, String numeroTelephone) {
        this.nom = nom;
        this.adresse = adresse;
        this.numeroTelephone = numeroTelephone;

        if (nombreObjets < listeIndividus.length) {
            listeIndividus[nombreObjets] = this;
            nombreObjets++;
        } else {
            System.out.println("La liste des individus est pleine, impossible d'ajouter un nouvel individu.");
        }
    }

    public String getNom() {
        return nom;
    }

    public void setNom(String nom) {
        this.nom = nom;
    }

    public String getAdresse() {
        return adresse;
    }

    public void setAdresse(String adresse) {
        this.adresse = adresse;
    }

    public String getNumeroTelephone() {
        return numeroTelephone;
    }

    public void setNumeroTelephone(String numeroTelephone) {
        this.numeroTelephone = numeroTelephone;
    }

    public void afficherInformations() {
        System.out.println("Nom: " + nom);
        System.out.println("Adresse: " + adresse);
        System.out.println("Numéro de téléphone: " + numeroTelephone);
    }

    public static int getNombreObjets() {
        return nombreObjets;
    }

    public static void afficherListeIndividus() {
        System.out.println("Liste des individus créés : ");
        for (int i = 0; i < nombreObjets; i++) {
            listeIndividus[i].afficherInformations();
            System.out.println("-----------------------");
        }
    }

    public static void main(String[] args) {
        Individu individu1 = new Individu("Alice", "123 Rue A", "111-1111");
        Individu individu2 = new Individu("Bob", "456 Rue B", "222-2222");

        individu1.afficherInformations();
        System.out.println("-----------------------");
        individu2.afficherInformations();

        System.out.println("\nNombre total d'objets Individu créés : " + Individu.getNombreObjets());

        Individu.afficherListeIndividus(); // appel de la methode static
    }
}
