#include <stdio.h>

// Example dishes
// dish1 = SquareDish {name = "square-dish", len = 10, width = 7, depth = 4}
// dish2 = RoundDish {name = "round-dish", diameter = 7, depth = 3}

enum Shape {ROUND, SQUARE};

struct Round {
  int depth;
  int radius;
  };

struct Square {
  int depth;
  int length;
  int width;
  };

union ShapeUnion{
 struct Square pSquare;
 struct Round pRound;
};

struct dish {
  char *name;
  enum Shape shapeType;
  union ShapeUnion unionPoint;
};

int main() {
  printf("1. Square to Round\n");
  printf("2. Round to Square\n");
}

struct dish dish1 {
  name = "Heso";
  shapeType = ROUND;
  depth = 5;
  radius = 10;
};

/*
{-
 [ ] Calcualate a proportional baking dish of a different shape.
 [ ] inch conversion
 [ ] Result in litres
 [ ] Show similar we own
 [ ] A list of currently owned dishes
-}

-- type Name = String
-- type Length = Int
-- type Width = Int
-- type Depth = Int

data Dish =
  SquareDish {
    name :: String,
    len :: Double,
    width :: Double,
    depth :: Double
  } |
  RoundDish {
    name :: String,
    diameter :: Double,
    depth :: Double
  }
  deriving (Show, Eq)


-- Example dishes
dish1 = SquareDish {name = "square-dish", len = 10, width = 7, depth = 4}
dish2 = RoundDish {name = "round-dish", diameter = 7, depth = 3}

squareDishes = [dish1]
roundDishes  = [dish2]

volume :: Dish -> Double
volume dish = case dish of
  SquareDish {} -> len dish * width dish * depth dish
  RoundDish {} -> (diameter dish / 2) ^ 2 * pi * depth dish

findClosest :: Dish -> [Dish] -> Dish
findClosest dish1 [] = dish1
findClosest dish1 dish2:[dishes] = closest
  where
    closest dish1 dish2
      | volume dish1 - volume dish2 = dish1
      | _ = dish2
    dishVolume = volume dish


-- 20 * 30 * 5 = 3000
-- 3000 / 5 = r ^ 2 * pi
-- sqrt(3000 / 5 * pi) = r
-- diameter = r * 2
-- rv = r ^ 2 * pi

-- squareToRound =

-- main = do
--   putStrLn "Select option:"
--   putStrLn "1. Round to Rectangular"
--   putStrLn "2. Rectangular to Round"
--   selection <- readLn :: IO Int
--   case selection of
--     1 -> do
--       putStrLn "Enter width, height and depth: "
--       input <- getLine
--       let [w, h, d] = words input
--       let volume = squareVolume (read w) (read h) (read d)

--     2 -> putStrLn "Enter diameter and depth: "
--     _ -> putStrLn "Invalid input"
--   input <- getLine

  -- Round to square
  -- let [diameter, depth] = words input
  -- let volume = roundVolume (read diameter) (read depth)
  */
