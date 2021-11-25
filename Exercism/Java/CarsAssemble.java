public class CarsAssemble {

    public double productionRatePerHour(int speed) {
        if(speed==0)
            return 0.0;
        else if(speed>=1 && speed<=4)
            return 1.00*speed*221.0;
        else if(speed>=5 && speed<=8)
            return 0.90*speed*221.0;
        else if(speed==9)
            return 7.20*221.0;
        else
            return 7.70*221.0;
    }

    public int workingItemsPerMinute(int speed) {
        if(speed==0)
            return 0;
        else if(speed>=1 && speed<=4)
            return (int)(Math.floor((speed*221)/60));
        else if(speed>=5 && speed<=8)
            return (int)Math.floor((speed*221*0.90)/60);
        else if(speed==9)
            return (int)Math.floor((speed*221*0.80)/60);
        else
            return (int)Math.floor((10*221*0.77)/60);
        
    }
}
