class SpaceAge {
    double seconds;
    SpaceAge(double seconds) {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        this.seconds = seconds;
    }

    double getSeconds() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return seconds;
    }

    double onEarth() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return seconds/(31557600);
    }

    double onMercury() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/0.2408467;
    }

    double onVenus() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/0.61519726;
    }

    double onMars() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/1.8808158;
    }

    double onJupiter() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/11.862615;
    }

    double onSaturn() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/29.447498;
        
    }

    double onUranus() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/84.016846;
    }

    double onNeptune() {
        // throw new UnsupportedOperationException("Delete this statement and write your own implementation.");
        return onEarth()/164.79132;
    }

}
