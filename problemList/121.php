Sliding Window Problem

There are only 2 checks needed:
  - Is the current price the cheapest we have seen?
  - If I subtract the cheapest price from the current price, is that profit greater than our maxProfit?

Hint: If the first is true, then you do not need to check the second

PHP
<?php
class Solution {

    /**
     * @param int[] $prices
     * @return int
     */
    function maxProfit($prices) {
      $cheapest = $prices[0];
      $max_profit = 0;

      foreach($prices as $x) {
        if($x < $cheapest) $cheapest = $x;
        else {
            if(($x - $cheapest) > $max_profit) $max_profit = $x - $cheapest;
        }

      }

      return $max_profit;      
    }
}