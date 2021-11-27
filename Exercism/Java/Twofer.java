import java.util.Optional;
class Twofer {
    static String twofer(String name) {
        return String.format("One for %s, one for me.",
                Optional.ofNullable(name).orElse("you"));
    }
}
