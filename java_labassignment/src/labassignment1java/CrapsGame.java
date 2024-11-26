package labassignment1java;

public class CrapsGame {
	
	    public enum Outcome {
	        WIN, LOSE, POINT
	    }

	    public enum PointValue {
	        FOUR(4), FIVE(5), SIX(6), EIGHT(8), NINE(9), TEN(10);

	        private int value;

	        PointValue(int value) {
	            this.value = value;
	        }

	        public int getValue() {
	            return value;
	        }
	    }

	    public static void playCraps() {
	        int sum = rollDice();
	        Outcome outcome = determineOutcome(sum);

	        switch (outcome) {
	            case WIN:
	                System.out.println("You win!");
	                break;
	            case LOSE:
	                System.out.println("You lose!");
	                break;
	            case POINT:
	                PointValue pointValue = getPointValue(sum);
	                System.out.println("Your point is " + pointValue.getValue());
	                playUntilPoint(pointValue);
	                break;
	        }
	    }

	    private static int rollDice() {
	        int die1 = (int) (Math.random() * 6) + 1;
	        int die2 = (int) (Math.random() * 6) + 1;
	        return die1 + die2;
	    }

	    private static Outcome determineOutcome(int sum) {
	        if (sum == 7 || sum == 11) {
	            return Outcome.WIN;
	        } else if (sum == 2 || sum == 3 || sum == 12) {
	            return Outcome.LOSE;
	        } else {
	            return Outcome.POINT;
	        }
	    }

	    private static PointValue getPointValue(int sum) {
	        for (PointValue pointValue : PointValue.values()) {
	            if (pointValue.getValue() == sum) {
	                return pointValue;
	            }
	        }
	        return null; // should not happen
	    }

	    private static void playUntilPoint(PointValue pointValue) {
	        while (true) {
	            int sum = rollDice();
	            if (sum == pointValue.getValue()) {
	                System.out.println("You made your point! You win!");
	                break;
	            } else if (sum == 7) {
	                System.out.println("You rolled a 7. You lose!");
	                break;
	            }
	        }
	    }

	    public static void main(String[] args) {
	        playCraps();
	    }
	}

